#include <string>
#include "modification.h"
#include "modifiers.h"

using std::string;

namespace Modification{
	namespace Modifications{
		Modification::modification usesLightWeapons = {
			"Uses Light Weapons",
			{ 
				{ &Modifiers::Equipment::addCategoryDaggers, &Modifiers::Equipment::removeCategoryDaggers },
				{ &Modifiers::Equipment::addCategoryStaves, &Modifiers::Equipment::removeCategoryStaves }
			}
		};
	}
}