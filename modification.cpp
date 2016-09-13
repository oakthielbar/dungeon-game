#include <string>
#include <functional>
#include "modification.h"
#include "equipment.h"

using std::string;

namespace Modification{
	namespace Modifications{
		Modification::modification usesLightWeapons = {
			"Uses Light Weapons",
			{{ 
				Modifiers::Equipment::addUsableCategories({
					Equipment::Category::WEAPON_SLINGS,
					Equipment::Category::WEAPON_DAGGERS, 
					Equipment::Category::WEAPON_STAVES 
				}), 
				Modifiers::Equipment::removeUsableCategories({
					Equipment::Category::WEAPON_SLINGS,
					Equipment::Category::WEAPON_DAGGERS, 
					Equipment::Category::WEAPON_STAVES
				}) 
			}}
		};
		Modification::modification usesStandardMeleeWeapons = {
			"Uses Standard Melee Weapons",
			{{
				Modifiers::Equipment::addUsableCategories({
					Equipment::Category::WEAPON_SWORDS,
					Equipment::Category::WEAPON_BLUDGEONING
				}), 
				Modifiers::Equipment::removeUsableCategories({
					Equipment::Category::WEAPON_SWORDS,
					Equipment::Category::WEAPON_BLUDGEONING
				}) 
			}}
		};
		Modification::modification usesAdvancedMeleeWeapons = {
			"Uses Advanced Melee Weapons",
			{{
				Modifiers::Equipment::addUsableCategories({
					Equipment::Category::WEAPON_AXES,
					Equipment::Category::WEAPON_POLEARMS
				}), 
				Modifiers::Equipment::removeUsableCategories({
					Equipment::Category::WEAPON_AXES,
					Equipment::Category::WEAPON_POLEARMS
				}) 
			}}
		};
	}
}