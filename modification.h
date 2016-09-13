#ifndef MODIFICATION_H
#define MODIFICATION_H

#include <string>
#include <vector>
#include <utility>
#include <functional>

using std::string;
using std::vector;
using std::pair;

class Actor;

typedef std::function<void(Actor *a)> func;

namespace Modification{
	struct modification{
		string name;
		vector<pair<func, func> > modifiers;
	};

	namespace Modifications{
		extern modification usesLightWeapons;
		extern modification usesStandardMeleeWeapons;
		extern modification usesAdvancedMeleeWeapons;
	}
}

#endif