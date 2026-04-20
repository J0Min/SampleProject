#include <iostream>
using namespace std;

int main() 
{
	char userName[50];
	char charactorClass[50];

	int strength = 50;
	int dexterity = 50;
	int vitality = 50;
	int energy = 50;

	int level = 1;
	int hp = 100;
	int mp = 100;
	
	float attackDamage = dexterity / 0.2f;
	float attackSpeed = dexterity / 10.0f;
	double movingSpeed = dexterity / 30.0f;

	bool isHardcore = true;
	char hardcoreInput;

	int fireResist = 0;
	int lightningResist = 0;
	int coldResist = 0;
	int posionResist = 0;

	cout << "[ Character Creation ]\n";
	cout << "Input your name: ";
	cin >> userName;
	cout << "Input your Class: ";
	cin >> charactorClass;
	cout << "Enable Hardcore Mode? (1) Yes, (2) No: ";
	cin >> hardcoreInput;

	if (hardcoreInput == '1') {
		isHardcore = true;
		cout << "[System] Hardcore mode enabled. Death is permanent\n";
	}
	else if (hardcoreInput == '2') {
		isHardcore = false;
		cout << "[System] Standard mode enabled.\n";
	}
	else {
		isHardcore = false;
		cout << "[System] Standard mode enabled.\n";
	}

	cout << "\n:::::::: Welcome to the Sanctuary ::::::::\n";
	cout << "Uset Name : [" << userName << "]\n";

	cout << "----------------Character Status----------------\n";
	cout << "Class: " << charactorClass << "\n";
	cout << "Level: " << level << "\n";
	cout << "HP: " << hp << "\n";
	cout << "MP: " << mp << "\n";
	cout << "Attack Damage: " << attackDamage << "\n";
	cout << "Attack Speed: " << attackSpeed << "\n";
	cout << "Moving Speed: " << movingSpeed << "\n";
	cout << "Strength: " << strength << "\n";
	cout << "Dexterity: " << dexterity << "\n";
	cout << "Vitality: " << vitality << "\n";
	cout << "Energy: " << energy << "\n";
	cout << "Haercore Mode: " << isHardcore << " (1: true, 0: false)\n";

	cout << "--------------------------------\n";

	cout << "[Memory Check] int type size: " << sizeof(hp) << "bytes\n";
	cout << "[Memory Check] bool type size: " << sizeof(isHardcore) << "bytes\n";

	cout << "Fire Resistance: " << fireResist << "\n";
	cout << "Lightning Resistance: " << lightningResist << "\n";
	cout << "Cold Resistance: " << coldResist << "\n";
	cout << "Poision Resistance: " << posionResist << "\n";
	
	return 0;
}