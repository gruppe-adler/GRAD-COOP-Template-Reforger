/**
Modes and Budget attribute for getting and setting varriables in Editor Attribute window
*/
[BaseContainerProps(), SCR_BaseEditorAttributeCustomTitle()]
modded class SCR_BasePlayerBudgetEditorAttribute: SCR_BaseValueListEditorAttribute
{	
	override SCR_BaseEditorAttributeVar ReadVariable(Managed item, SCR_AttributesManagerEditorComponent manager)
	{		
		//~ Todo: Disabled for now until serverwide budgets can be set
		//return null;
				 
		SetEditorManager(item);
		if (!m_EditorManager) 
			return null;
		
		SCR_BudgetEditorComponent budgetComponent = SCR_BudgetEditorComponent.Cast(m_EditorManager.FindComponent(SCR_BudgetEditorComponent));
		if (!budgetComponent) 
			return null;
		
		int maxBudget;
		budgetComponent.GetMaxBudgetValue(GetBudgetType(), maxBudget);

		return SCR_BaseEditorAttributeVar.CreateFloat(maxBudget);
	}
};