#include "equipment.h"
#include <map>
#include <string>
#include <vector>	
#include "equipment.h"
#include "actor.h"
#include "modifier.h"

using std::map;
using std::string;
using std::vector;
using Equipment::Category;

namespace Equipment{
	string getCategoryName(Category c){
		return categoryToName[c];
	}

	map<Category, string> createCategoryNameMap(){
		map<Category, string> categoryToName = {
			{ WEAPON_SLINGS, "Slings" },
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
		void addUsableCategories::operator()(Actor *a){
			vector<::Equipment::Category>::iterator cIt;
			for(cIt = param.begin(); cIt != param.end(); cIt++){
				a->addUsableEquipmentTypes(*cIt);
			} 
		}
		void removeUsableCategories::operator()(Actor *a){ 
			vector<::Equipment::Category>::iterator cIt;
			for(cIt = param.begin(); cIt != param.end(); cIt++){
				a->removeUsableEquipmentTypes(*cIt);
			}
		}
	}
}