#ifndef PC_H
#define PC_H

#include "datatypes.h"
#include "actor.h"

class Pc : public Actor{
	public:
		Pc();
		ushort getLevel();
		void setLevel(ushort lvl);
	protected:
		ushort level;
};

#endif