///////////////////////////////////////////////////////////
//  Asset.cpp
//  Implementation of the Class Asset
///////////////////////////////////////////////////////////

#include "Asset.h"
#include "IEC61968/Assets/AssetContainer.h"


using IEC61968::Assets::Asset;


Asset::Asset()
	: ErpInventory(nullptr), AssetContainer(nullptr), AssetInfo(nullptr), Location(nullptr)
{

}



Asset::~Asset(){

}
