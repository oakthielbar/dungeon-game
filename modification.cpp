#include <string>
#include <functional>
#include "modification.h"
#include "equipment.h"

using std::string;

namespace Modification{
	namespace Modifications{
		Modification::modification usesLightWeapons = {
			"Uses Light Weapons",
			{ 
				{ 
					Modifiers::Equipment::addUsableCategories( { Equipment::Category::WEAPON_DAGGERS, Equipment::Category::WEAPON_STAVES, Equipment::Category::WEAPON_SWORDS } ), 
					Modifiers::Equipment::removeUsableCategories( { Equipment::Category::WEAPON_DAGGERS, Equipment::Category::WEAPON_STAVES, Equipment::Category::WEAPON_SWORDS } ) 
				}
			}
		};
	}
}

/*
namespace Modification{
	namespace Modifications{
		Modification::modification usesLightWeapons = {
			"Uses Light Weapons",
			{ 
				{ &Modifiers::Equipment::addUsableCategories, &Modifiers::Equipment::removeUsableCategories },
				{ &Modifiers::Equipment::addCategoryStaves, &Modifiers::Equipment::removeCategoryStaves }
			}
		};
	}
}
*/

/*
#include <string>
#include <experimental/any>
#include "modification.h"
#include "equipment.h"

using std::string;
using std::experimental::any_cast;

namespace Modification{
	namespace Modifications{
		Modification::modification usesLightWeapons = {
			"Uses Light Weapons",
			{ 
				{ 
					&Modifiers::Equipment::addUsableCategories, &Modifiers::Equipment::removeUsableCategories
					//static_cast<void (*)(Actor *a, vector<Equipment::Category>)>&Modifiers::Equipment::addUsableCategories, 
					//static_cast<void (*)(Actor *a, vector<Equipment::Category>)>&Modifiers::Equipment::removeUsableCategories
				}
				//{ &Modifiers::Equipment::addCategoryDaggers, &Modifiers::Equipment::removeCategoryDaggers },
				//{ &Modifiers::Equipment::addCategoryStaves, &Modifiers::Equipment::removeCategoryStaves }
			},
			{ 
				Equipment::Category::WEAPON_DAGGERS
				//vector<Equipment::Category> { Equipment::Category::WEAPON_DAGGERS, Equipment::Category::WEAPON_STAVES } 
			}
		};
	}
}
*/