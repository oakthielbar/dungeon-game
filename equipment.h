#ifndef EQUIPMENT_H
#define EQUIPMENT_H

class Actor;

#include <map>
#include <string>
#include <vector>
#include "modifier.h"

using std::map;
using std::string;
using std::vector;

namespace Equipment{
	enum Category{
		WEAPON_SLINGS,
		WEAPON_DAGGERS,
		WEAPON_STAVES,
		WEAPON_POLEARMS,
		WEAPON_AXES,
		WEAPON_SWORDS,
		WEAPON_BLUDGEONING,
		ARMOR_LIGHT,
		ARMOR_MEDIUM,
		ARMOR_HEAVY,
		SHIELD_LIGHT,
		SHIELD_MEDIUM,
		SHIELD_HEAVY
	};

	map<Category, string> createCategoryNameMap();

	string getCategoryName(Category c);

	extern map<Category, string> categoryToName;
}

namespace Modifiers{
	namespace Equipment{
		struct addUsableCategories : public modifier<vector<::Equipment::Category> >{
			addUsableCategories(vector<::Equipment::Category> c){
				param = c;
			}
			void operator()(Actor *a);
		};
		struct removeUsableCategories : public modifier<vector<::Equipment::Category> >{
			removeUsableCategories(vector<::Equipment::Category> c){
				param = c;
			}
			void operator()(Actor *a);
		};
	}
}

#endif