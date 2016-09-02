#ifndef MODIFICATION_H
#define MODIFICATION_H

class Actor;

typedef void (*modify)(Actor*);
typedef void (*unmodify)(Actor*);

#include <string>
#include <vector>
#include <utility>
#include "modifiers.h"

using std::string;
using std::vector;
using std::pair;

namespace Modification{
	struct modification{
		string name;
		vector< pair<modify, unmodify> > modifiers;
	};

	namespace Modifications{
		extern modification usesLightWeapons;
	}
}

#endif