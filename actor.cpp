#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include "datatypes.h"
#include "actor.h"
#include "equipment.h"

using std::string; 
using std::vector;
using std::cout;
using std::endl;

Actor::Actor(){
	id = 0;
	currentHealth = 0;
	maxHealth = 0;
	name = "";
}

ulong Actor::getId(){
	return id;
}

ushort Actor::getCurrentHealth(){
	return currentHealth;
}

void Actor::setCurrentHealth(ushort i){
	currentHealth = i;
}

ushort Actor::getMaxHealth(){
	return maxHealth;
}

void Actor::setMaxHealth(ushort i){
	maxHealth = i;
}

string Actor::getName(){
	return name;
}

void Actor::setName(string s){
	name = s;
}

vector<modification*> Actor::getModifications(){
	return modifications;
}

void Actor::addModification(modification *m){
	modifications.push_back(m);

  	vector< pair<func, func> >::iterator modifiersIt;
  	for(modifiersIt = m->modifiers.begin(); modifiersIt != m->modifiers.end(); modifiersIt++){
		modifiersIt->first(this);
  	}
}

void Actor::removeModification(modification *m){
  	vector<modification*>::iterator modificationsIt;
	modificationsIt = std::find(modifications.begin(), modifications.end(), m);
	if(modificationsIt != modifications.end()){
  		vector< pair<func, func> >::iterator modifiersIt;
	  	for(modifiersIt = m->modifiers.begin(); modifiersIt != m->modifiers.end(); modifiersIt++){
			modifiersIt->second(this);
	  	}
		modifications.erase(modificationsIt);
	} else {
		// error?
		cout << "ERROR: Attempted to remove modification (" << m->name << ") from Actor (" << name 
		<< "); modification not found." << endl;
	}
}

vector<Equipment::Category> Actor::getUsableEquipmentTypes(){
	return usableEquipmentTypes;
}

void Actor::addUsableEquipmentTypes(Equipment::Category c){
	usableEquipmentTypes.push_back(c);
}

void Actor::removeUsableEquipmentTypes(Equipment::Category c){
  	vector<Equipment::Category>::iterator it;
	it = std::find(usableEquipmentTypes.begin(), usableEquipmentTypes.end(), c);
	if(it != usableEquipmentTypes.end()){
		usableEquipmentTypes.erase(it);
	} else {
		// error?
	}
}