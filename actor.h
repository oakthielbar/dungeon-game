#ifndef ACTOR_H
#define ACTOR_H

#include <string>
#include <vector>
#include "datatypes.h"
#include "modification.h"
#include "equipment.h"

using Modification::modification;
using std::string; 
using std::vector;

class Actor{
	public:
		Actor();
		ulong getId();
		ushort getCurrentHealth();
		void setCurrentHealth(ushort i);
		ushort getMaxHealth();
		void setMaxHealth(ushort i);
		string getName();
		void setName(string name);
		vector<modification*> getModifications();
		void addModification(modification *m);
		void removeModification(modification *m);
		vector<Equipment::Category> getUsableEquipmentTypes();
		void addUsableEquipmentTypes(Equipment::Category c);
		void removeUsableEquipmentTypes(Equipment::Category c);
	protected:
		ulong id;
		string name;
		ushort currentHealth;
		ushort maxHealth;
		vector<modification*> modifications;
		vector<Equipment::Category> usableEquipmentTypes;
};

#endif