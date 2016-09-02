#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include <map>
#include <string>
#include "actor.h"

using std::map;
using std::string;

namespace Equipment{
	enum Category{
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
		void addUsableCategory (Actor *a, ::Equipment::Category c);
		void addCategoryDaggers (Actor *a);
		void removeCategoryDaggers (Actor *a);
		void addCategoryStaves (Actor *a);
		void removeCategoryStaves (Actor *a);
	}
}

#endif