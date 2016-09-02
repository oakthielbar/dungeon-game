#include "datatypes.h"
#include "pc.h"

Pc::Pc(){
	level = 0;
}

ushort Pc::getLevel(){
	return level;
}

void Pc::setLevel(ushort lvl){
	level = lvl;
}