#include <iostream>
#include <string>
using namespace std;

int main()
{
	char userName[50];
	string charactorClass;
	int classChoiceInput;

	int strength = 50;
	int dexterity = 50;
	int vitality = 50;
	int energy = 50;

	int level = 1;
	int hp = 100;
	int mp = 100;

	float attackDamage = dexterity * 0.2f;
	float attackSpeed = dexterity * 10.0f;
	double movingSpeed = dexterity * 30.0f;

	bool isHardcore = true;
	char hardcoreInput;

	int fireResist = 0;
	int lightningResist = 0;
	int coldResist = 0;
	int posionResist = 0;

	cout << "[ Character Creation ]\n";
	cout << "Input your name: ";
	cin >> userName;

	cout << "Select your Class: \n";
	cout << "1. Amazon\n2. Assassin\n3. Barbarian\n4. Druid\n";
	cout << "5. Necromancer\n6. Paladin\n7. Sorceress\n8. Warlock\n";
	cout << "Input Class Number: ";
	cin >> classChoiceInput;

	switch (classChoiceInput)
	{
	case 1: charactorClass = "Amazon"; break;
	case 2: charactorClass = "Assassin"; break;
	case 3: charactorClass = "Barbarian"; break;
	case 4: charactorClass = "Druid"; break;
	case 5: charactorClass = "Necromancer"; break;
	case 6: charactorClass = "Paladin"; break;
	case 7: charactorClass = "Sorceress"; break;
	case 8: charactorClass = "Warlock"; break;
	default:
		charactorClass = "Unknown";
		cout << "[System] Invalid choice. Defaulting to Unknwon.\n";
		break;
	}

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

	int goblinHP = 30;
	int action;

	cout << "\n[System] You encounered a Goblin!\n";
	while (goblinHP > 0 && hp > 0) {
		cout << "\n[ Goblin HP: " << goblinHP << " | My HP: " << hp << " ]\n";
		cout << "1. Attack: ";
		cin >> action;

		if (action == 1) {
			goblinHP -= attackDamage;
			cout << "=> You attacked the Goblin! (-" << attackDamage << ")\n";

			if (goblinHP > 0) {
				hp -= 30;
				cout << "=> The Goblin in attacked you! (-30)\n";
			}
		}
		else {
			cout << "=> Invalid action! Please choose a valid action\n";
			hp -= 30;
			cout << "=> The Goblin in attacked you! (-30)\n";
		}

		cout << "\n";
		if (hp <= 0) {
			cout << "[System] You died...\n";
		}
		else {
			cout << "[System] You defeated the Goblin\n";
		}
	}
	return 0;
}