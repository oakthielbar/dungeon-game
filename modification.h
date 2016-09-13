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
	}
}

/*
typedef void (*modify)(Actor*, vector<any>);
typedef void (*unmodify)(Actor*, vector<any>);

namespace Modification{
	struct modification{
		string name;
		vector<pair<modify, unmodify> > modifiers;
		vector<any> modParams;
	};

	namespace Modifications{
		extern modification usesLightWeapons;
	}
}
*/


/*
namespace Modification{
	struct modification{
		string name;
		pair<modify, unmodify> modFunctions;
	};

	namespace ModFunctions{
		void addLightWeapons(Actor *a);
		void removeLightWeapons(Actor *a);
	}
*/

#endif