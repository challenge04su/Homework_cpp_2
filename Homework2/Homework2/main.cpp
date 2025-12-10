#include <iostream>
#include "Player.h"
#include "Warrior.h"
#include "Magician.h"
#include "Thief.h"
#include "Archer.h"
#include "Monster.h"

using namespace std;

int main() {
    string jobs[] = { "전사", "마법사", "도적", "궁수" };
    int job_choice = 0;
    string nickname;
    string monsterName;

    Player* player = nullptr;

    cout << "* 닉네임을 입력해주세요: ";
    cin >> nickname;

    cout << "<전직 시스템>" << endl;
    cout << nickname << "님, 환영합니다!" << endl;
    cout << "* 원하시는 직업을 선택해주세요." << endl;

    

    for (int i = 0; i < 4; i++) {
        cout << (i + 1) << ". " << jobs[i] << endl;
    }

    cout << "선택: ";
    cin >> job_choice;
    cout << endl;

    switch (job_choice) {
    case 1:
        player = new Warrior(nickname);
        break;
    case 2:
        player = new Magician(nickname);
        break;
    case 3:
        player = new Thief(nickname);
        break;
    case 4:
        player = new Archer(nickname);
        break;
    default:
        cout << "잘못된 입력입니다." << endl;
        return 1;
    }
    player->printPlayerStatus();
    cout << endl;

    cout << "생성할 몬스터의 이름을 적어주세요. : ";
    cin >> monsterName;

    Monster* monster = new Monster(monsterName);

    while(player->getHP() > 0 && monster->getHP() > 0)
    { 
        player->attack(monster);
        if (monster->getHP() < 1)
            break;

        monster->attack(player);
        if (player->getHP() < 1)
            break;
    }
    delete player;

    return 0;
}