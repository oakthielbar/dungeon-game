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