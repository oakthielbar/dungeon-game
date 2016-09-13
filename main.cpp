#include <string>
#include <vector>
#include <iostream>
#include <cstdlib>
#include "datatypes.h"
#include "pc.h"
#include "modifier.h"
#include "modification.h"
#include "equipment.h"

using std::cout;
using std::vector;
using std::string;
using std::endl;

void displayPcInfo(Pc *player){
	cout << "Name: " << player->getName() << endl;
	cout << "Max health: " << player->getMaxHealth() << endl;
	cout << "Current health: " << player->getCurrentHealth() << endl;
	cout << "Level: " << player->getLevel() << endl;
	
	cout << "Modifications: ";
	vector<modification*> mods = player->getModifications();

	if(mods.size() == 0){
		cout << "None";
	} else {
		vector<modification*>::iterator modsIt;
		for(modsIt = mods.begin(); modsIt != mods.end(); modsIt++){
			cout << (*modsIt)->name << " ";
		}
	}

	cout << endl;
	
	cout << "Usable Equipment Types: ";
	vector<Equipment::Category> uet = player->getUsableEquipmentTypes();

	if(uet.size() == 0){
		cout << "None";
	} else {
		vector<Equipment::Category>::iterator uetIt;
		for(uetIt = uet.begin(); uetIt != uet.end(); uetIt++){
			cout << Equipment::getCategoryName(*uetIt) << " ";
		}
	}

	cout << endl << endl;
}

int main(){
	cout << "Creating PC..." << endl;
	Pc *player = new Pc();
	cout << "PC created." << endl;

	displayPcInfo(player);

	cout << "Updating PC info..." << endl;

	string playerName = "Player";
	ushort maxHealth = 100;
	ushort currentHealth = 50;
	uchar level = 1;
	
	player->setName(playerName);
	player->setMaxHealth(maxHealth);
	player->setCurrentHealth(currentHealth);
	player->setLevel(level);

	cout << "PC info updated." << endl;

	displayPcInfo(player);

	cout << "Adding modification..." << endl;
	player->addModification(&Modification::Modifications::usesLightWeapons);
	cout << "Modification applied." << endl;

	displayPcInfo(player);

	cout << "Removing modification..." << endl;
	player->removeModification(&Modification::Modifications::usesLightWeapons);
	cout << "Modification removed." << endl;

	displayPcInfo(player);

	cout << "Provoking error by removing non-present modification..." << endl;
	player->removeModification(&Modification::Modifications::usesLightWeapons);
	cout << "Error provoked." << endl;

	cout << "Deleting PC..." << endl;
	delete player;
	cout << "PC deleted." << endl;

	return 1;
}