[BaseContainerProps(configRoot: true), BaseContainerCustomCheckIntTitleField("m_bEnabled", "Arsenal Data", "DISABLED - Arsenal Data", 1)]
modded class SCR_ArsenalItem : SCR_BaseEntityCatalogData
{	
	//--------------------------------- Direct Getter general or any faction ---------------------------------\\
	/*!
	Get supply cost of arsenal item
	\return Supplycost
	*/
	override int GetSupplyCost()
	{
		return 0;
	}
};