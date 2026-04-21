//#include <iostream>
//#include <string>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//
//int main()
//{
//	char userName[50];
//	string charactorClass;
//	int classChoiceInput;
//
//	int strength = 50;
//	int dexterity = 50;
//	int vitality = 50;
//	int energy = 50;
//
//	int level = 1;
//	int hp = 100;
//	int mp = 100;
//
//	float attackDamage = dexterity * 0.2f;
//	float attackSpeed = dexterity * 10.0f;
//	double movingSpeed = dexterity * 30.0f;
//
//	bool isHardcore = true;
//	char hardcoreInput;
//
//	int fireResist = 0;
//	int lightningResist = 0;
//	int coldResist = 0;
//	int posionResist = 0;
//
//	cout << "[ Character Creation ]\n";
//	cout << "Input your name: ";
//	cin >> userName;
//
//	cout << "Select your Class: \n";
//	cout << "1. Amazon\n2. Assassin\n3. Barbarian\n4. Druid\n";
//	cout << "5. Necromancer\n6. Paladin\n7. Sorceress\n8. Warlock\n";
//	cout << "Input Class Number: ";
//	cin >> classChoiceInput;
//
//	switch (classChoiceInput)
//	{
//	case 1: charactorClass = "Amazon"; break;
//	case 2: charactorClass = "Assassin"; break;
//	case 3: charactorClass = "Barbarian"; break;
//	case 4: charactorClass = "Druid"; break;
//	case 5: charactorClass = "Necromancer"; break;
//	case 6: charactorClass = "Paladin"; break;
//	case 7: charactorClass = "Sorceress"; break;
//	case 8: charactorClass = "Warlock"; break;
//	default:
//		charactorClass = "Unknown";
//		cout << "[System] Invalid choice. Defaulting to Unknwon.\n";
//		break;
//	}
//
//	cout << "Enable Hardcore Mode? (1) Yes, (2) No: ";
//	cin >> hardcoreInput;
//
//	if (hardcoreInput == '1') {
//		isHardcore = true;
//		cout << "[System] Hardcore mode enabled. Death is permanent\n";
//	}
//	else if (hardcoreInput == '2') {
//		isHardcore = false;
//		cout << "[System] Standard mode enabled.\n";
//	}
//	else {
//		isHardcore = false;
//		cout << "[System] Standard mode enabled.\n";
//	}
//
//	cout << "\n:::::::: Welcome to the Sanctuary ::::::::\n";
//	cout << "Uset Name : [" << userName << "]\n";
//
//	cout << "----------------Character Status----------------\n";
//	cout << "Class: " << charactorClass << "\n";
//	cout << "Level: " << level << "\n";
//	cout << "HP: " << hp << "\n";
//	cout << "MP: " << mp << "\n";
//	cout << "Attack Damage: " << attackDamage << "\n";
//	cout << "Attack Speed: " << attackSpeed << "\n";
//	cout << "Moving Speed: " << movingSpeed << "\n";
//	cout << "Strength: " << strength << "\n";
//	cout << "Dexterity: " << dexterity << "\n";
//	cout << "Vitality: " << vitality << "\n";
//	cout << "Energy: " << energy << "\n";
//	cout << "Haercore Mode: " << isHardcore << " (1: true, 0: false)\n";
//
//	cout << "--------------------------------\n";
//
//	cout << "[Memory Check] int type size: " << sizeof(hp) << "bytes\n";
//	cout << "[Memory Check] bool type size: " << sizeof(isHardcore) << "bytes\n";
//
//	cout << "Fire Resistance: " << fireResist << "\n";
//	cout << "Lightning Resistance: " << lightningResist << "\n";
//	cout << "Cold Resistance: " << coldResist << "\n";
//	cout << "Poision Resistance: " << posionResist << "\n";
//
//	int goblinHP = 30;
//	int action;
//
//	cout << "\n[System] You encounered a Goblin!\n";
//	while (goblinHP > 0 && hp > 0) {
//		cout << "\n[ Goblin HP: " << goblinHP << " | My HP: " << hp << " ]\n";
//		cout << "1. Attack: ";
//		cin >> action;
//
//		if (action == 1) {
//			goblinHP -= attackDamage;
//			cout << "=> You attacked the Goblin! (-" << attackDamage << ")\n";
//
//			if (goblinHP > 0) {
//				hp -= 30;
//				cout << "=> The Goblin in attacked you! (-30)\n";
//			}
//		}
//		else {
//			cout << "=> Invalid action! Please choose a valid action\n";
//			hp -= 30;
//			cout << "=> The Goblin in attacked you! (-30)\n";
//		}
//	}
//	cout << "\n";
//	if (hp <= 0) {
//		cout << "[System] You died...\n";
//	}
//	else {
//		cout << "[System] You defeated the Goblin\n";
//
//		srand(time(NULL));
//		cout << "----------------Looting Items----------------\n";
//		for (int i = 1; i <= 3; i++) {
//			int lootRoll = rand() % 4;
//			string itemName;
//
//			if (lootRoll == 0) itemName = "Gold";
//			else if (lootRoll == 1) itemName = "Healing Potion";
//			else if (lootRoll == 2) itemName = "Weapon";
//			else itemName = "Armor";
//
//			cout << i << ". Get [" << itemName << "]\n";
//		}
//		cout << "---------------------------------------------\n";
//	}
//	return 0;
//}

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

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
	int maxHP = 100; // 체력바 계산을 위한 최대 체력
	int hp = maxHP;
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

	cout << "hp 변수의 값: " << hp << endl;
	cout << "hp 변수의 주소값" << &hp << endl;
	

	int* ptr = &hp;
	cout << "ptr 변수의 값: " << ptr << endl;
	cout << "*ptr 변수의 값: " << *ptr << endl;
	

	*ptr = 300;
	cout << "hp 변수의 새로운 값: " << hp << endl;
	

	//쓰레기값 출력 불가
	int* ptr2 = nullptr;
	cout << "*ptr2 변수의 값: " << ptr2 << endl;

	char* ptr_c;
	int* ptr_i;
	float* ptr_f;
	double ptr_d;

	cout << "char*  " << sizeof(ptr_c)<<endl;
	cout << "int*  " << sizeof(ptr_i) << endl;
	cout << "float*  " << sizeof(ptr_f) << endl;
	cout << "double*  " << sizeof(ptr_d) << endl;

	int a[2] = { 1,5 };
	cout << "A1  " << *a << endl <<a<< endl;
	cout << "A2  " << *(a + 1) << endl << (a + 1) <<  endl;
	
	system("pause");

	int score[5] = { 85,92,78,95,88 };
	cout << "&score[0] " << &score << endl;
	cout << "&score[1] " << &score[1] << endl;
	cout << "&score[2] " << &score[2] << endl;
	cout << "&score[3] " << &score[3] << endl;
	cout << "&score[4] " << &score[4] << endl;

	//Pointer Decay - 배열 이름이 시작주소로 형변환
	cout << "score: " << score << '\n';
	cout << "&score[0] " << &score[0] << endl;
	cout << "score[2] " << score[2] << endl;
	cout << "*(score[2]) " << *(score + 2) << endl;

	//형변환의 예외상황 sizeof 사용
	cout << "score_size  " << sizeof(score) << endl;//int 배열의 사이즈
	cout << "score_size[0]  " << sizeof(score[0]) << endl;//int 배열의 사이즈
	
	//형 변환의 예외상황: &주소 연산자 사용
	cout << "score: " << score << '\n';
	cout << "score + 1: " << score + 1 << '\n';//+4 단위 이동
	cout << "&score: " << score << '\n';
	cout << "&score + 1: " << &score + 1 << '\n';//+20단위로 배열 전체이동
		
	//배열순환 반복문
	int* sPtr = score;
	for (int i = 0; i < 5; i++) {
		cout << "주소: " << sPtr << '\t' << "  값: " << *sPtr << '\n';
		sPtr++;
	}

	system("pause");
	int* wildPtr;
	//*wildPtr = 100;
	
	wildPtr = nullptr;
	if (wildPtr != nullptr) {
		*wildPtr = 100;
	}
	int* wildPtr2 = new int(100);
	cout << "삭제 전 wPtr2: " << wildPtr2 << '\n';
	delete wildPtr2;
	//*wildPtr2 = 100;
	wildPtr2 = nullptr;
	cout << "삭제 후 wPtr2: " << wildPtr2 << '\n';
	system("pause");
	/////////////////////////////////////////////////////////////////////////////////////////////
	
	
	// [1] 캐릭터 이름 입력
	cout << "[ Character Creation ]\n";
	cout << "Input your name: ";
	cin >> userName;
	system("cls || clear");

	// [2] 직업 선택
	cout << "Select your Class: \n";
	cout << "1. Amazon\n2. Assassin\n3. Barbarian\n4. Druid\n";
	cout << "5. Necromancer\n6. Paladin\n7. Sorceress\n8. Warlock\n";
	cout << "Input Class Number: ";
	cin >> classChoiceInput;
	system("cls || clear");

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
		cout << "[System] Invalid choice. Defaulting to Unknown.\n";
		break;
	}

	// [3] 하드코어 모드 선택
	cout << "Enable Hardcore Mode? (1) Yes, (2) No: ";
	cin >> hardcoreInput;
	system("cls || clear");

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

	// [4] 메모리 체크 및 입장
	cout << "\n:::::::: Welcome to the Sanctuary ::::::::\n";
	cout << "User Name : [" << userName << "]\n";
	//cout << "[Memory Check] int type size: " << sizeof(hp) << "bytes\n";
	//cout << "[Memory Check] bool type size: " << sizeof(isHardcore) << "bytes\n";

	cout << "\n[ 전투에 진입하려면 Enter 키를 누르세요 ]";
	cin.ignore();
	cin.get();

	int maxGoblinHP = 30; // 고블린 최대 체력
	int goblinHP = maxGoblinHP;
	int action;

	int lastActionStatus = 0; // 0: 첫 조우, 1: 공격 주고받음, 2: 잘못된 행동, 3: 고블린 처치
	int killCount = 0; // 처치한 고블린 수 카운트

	// [5] 내가 죽을 때까지 무한 반복되는 전투 루프
	while (true) {
		system("cls || clear"); // 화면 초기화 후 스탯창 고정

		// --- 내 스탯 상단 네모 표시 ---
		cout << "=========================================================\n";
		cout << "                  [ Character Status ]                   \n";
		cout << "=========================================================\n";
		cout << " Name: " << userName << " | Class: " << charactorClass << " | Level: " << level << "\n";
		cout << " Attack: " << attackDamage << " | Atk Spd: " << attackSpeed << " | Mov Spd: " << movingSpeed << "\n";
		cout << " STR: " << strength << " | DEX: " << dexterity << " | VIT: " << vitality << " | ENG: " << energy << "\n";
		cout << " Hardcore Mode: " << isHardcore << " (1: true, 0: false)\n";
		cout << "=========================================================\n";

		// --- 전투 로그 출력 ---
		if (lastActionStatus == 0) {
			cout << "\n[System] You encountered a Goblin!\n";
		}
		else if (lastActionStatus == 1) {
			cout << "\n=> You attacked the Goblin! (-" << attackDamage << ")\n";
			cout << "=> The Goblin attacked you! (-30)\n";
		}
		else if (lastActionStatus == 2) {
			cout << "\n=> Invalid action! Please choose a valid action\n";
			cout << "=> The Goblin attacked you! (-30)\n";
		}
		else if (lastActionStatus == 3) {
			cout << "\n=> You attacked the Goblin! (-" << attackDamage << ")\n";
			cout << "=> You defeated the Goblin! (Total Defeated: " << killCount << ")\n";
			cout << "[System] A new Goblin appeared from the shadows!\n";
		}

		// --- 시각적 체력바(HP Bar) 출력 ---
		cout << "\n====================== [ BATTLE ] =======================\n";

		// 1. 내 체력바 그리기
		cout << " My HP     [";
		int myCurrentHP = (hp > 0 ? hp : 0); // 음수 방지
		int myFilled = myCurrentHP * 10 / maxHP;
		if (myCurrentHP > 0 && myFilled == 0) myFilled = 1; // 살아있으면 최소 1칸 표시

		for (int i = 0; i < 10; i++) {
			if (i < myFilled) cout << "■";
			else cout << "□";
		}
		cout << "] " << myCurrentHP << " / " << maxHP << "\n";

		// 2. 고블린 체력바 그리기
		cout << " Goblin HP [";
		int gobCurrentHP = (goblinHP > 0 ? goblinHP : 0); // 음수 방지
		int gobFilled = gobCurrentHP * 10 / maxGoblinHP;
		if (gobCurrentHP > 0 && gobFilled == 0) gobFilled = 1; // 살아있으면 최소 1칸 표시

		for (int i = 0; i < 10; i++) {
			if (i < gobFilled) cout << "■";
			else cout << "□";
		}
		cout << "] " << gobCurrentHP << " / " << maxGoblinHP << "\n";
		cout << "=========================================================\n";

		// [사망 체크] 내 체력이 0 이하면 루프(전투) 종료
		if (hp <= 0) {
			break;
		}

		// --- 현재 턴 행동 입력 ---
		cout << "\n1. Attack: ";
		cin >> action;

		// 전투 로직 계산
		if (action == 1) {
			goblinHP -= attackDamage;

			if (goblinHP > 0) {
				// 고블린이 살아있으면 반격
				hp -= 30;
				lastActionStatus = 1;
			}
			else {
				// 고블린을 처치하면 카운트를 올리고 새로운 고블린 등장
				killCount++;
				lastActionStatus = 3;
				goblinHP = maxGoblinHP; // 새 고블린 체력 갱신
			}
		}
		else {
			lastActionStatus = 2;
			hp -= 30; // 턴을 낭비했으므로 일방적으로 맞음
		}
	}

	// [6] 전투 종료 후 최종 결과 및 전리품 출력
	cout << "\n[System] You died...\n";
	cout << "Total Goblins Defeated: " << killCount << "\n";
	cout << "\n----------------Acquired Loot (남긴 전리품)----------------\n";

	srand(time(NULL));
	for (int i = 1; i <= 3; i++) {
		int lootRoll = rand() % 4;
		string itemName;

		if (lootRoll == 0) itemName = "Gold";
		else if (lootRoll == 1) itemName = "Healing Potion";
		else if (lootRoll == 2) itemName = "Weapon";
		else itemName = "Armor";

		cout << i << ". [" << itemName << "]\n";
	}
	cout << "-----------------------------------------------------------\n";

	return 0;
}