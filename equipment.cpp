#include "equipment.h"
#include <map>
#include <string>
#include <cstdlib>
#include "modifiers.h"
#include "actor.h"
#include "equipment.h"

using std::cout;
using std::map;
using std::string;
using Equipment::Category;

namespace Equipment{
	string getCategoryName(Category c){
		return categoryToName[c];
	}

	map<Category, string> createCategoryNameMap(){
		map<Category, string> categoryToName = {
			{ WEAPON_DAGGERS, "Daggers" },
			{ WEAPON_STAVES, "Staves" },
			{ WEAPON_POLEARMS, "Polearms" },
			{ WEAPON_AXES, "Axes" },
			{ WEAPON_SWORDS, "Swords" },
			{ WEAPON_BLUDGEONING, "Bludgeoning" },
			{ ARMOR_LIGHT, "Light Armor" },
			{ ARMOR_MEDIUM, "Medium Armor" },
			{ ARMOR_HEAVY, "Heavy Armor" },
			{ SHIELD_LIGHT, "Light Shields" },
			{ SHIELD_MEDIUM, "Medium Shields" },
			{ SHIELD_HEAVY, "Heavy Shields" }
		};
		return categoryToName;
	}

	map<Category, string> categoryToName = createCategoryNameMap();
}

namespace Modifiers{
	namespace Equipment{
		void addUsableCategory (Actor *a, ::Equipment::Category c){
			a->addUsableEquipmentTypes(c);
		}
		void addCategoryDaggers (Actor *a){
			a->addUsableEquipmentTypes(::Equipment::Category::WEAPON_DAGGERS);
		}
		void removeCategoryDaggers (Actor *a){
			a->removeUsableEquipmentTypes(::Equipment::Category::WEAPON_DAGGERS);
		}
		void addCategoryStaves (Actor *a){
			a->addUsableEquipmentTypes(::Equipment::Category::WEAPON_STAVES);
		}
		void removeCategoryStaves (Actor *a){
			a->removeUsableEquipmentTypes(::Equipment::Category::WEAPON_STAVES);
		}
	}
}