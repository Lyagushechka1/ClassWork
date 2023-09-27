#include <iostream>
using namespace std;
class Player {
private:
    string name;
    int hp;
    float speed;
    float accuracy; //damage = speed * accuracy
public:
    Player(string name) {
        this->name = name;
        this->hp = 100;
        this->speed = this->hp / 10;
        this->accuracy = rand() % 3;
    }
    string Getname(){ return this->name;}
    void newStep() { this->accuracy = rand() % 10; }
    void setHP(int hp) { this->hp = hp; }
    int GetHP() { return this->hp ;}
    int damage() { return this->speed * this->accuracy; }
    bool isAlive() {return this->hp > 0; }
};
class Game {
    bool isStart = false;
    int round = 0;
    Player list[4] = {{"Max"},{"Yan"},{"Dima"},{"Oleg"}};
public:
    void Start() {
        if (isStart == false) { isStart = true; }
        this->nextRound();
    }
    void Finish() { if (isStart == true) { isStart = false; } }
    int getRound() {
        cout << this->round;
        return this->round;
    };
    void printPlayersInfo() {
        cout << "Round " << this->round << " - Players Info" << endl;
        for (int i = 0; i < 4; i++) {
            cout << "Player " << list[i].Getname() << ": HP=" << list[i].GetHP() << "\n";
        }
    }
    bool allPlayersDead() {
        for (int i = 0; i < 4; i++) {
            if (list[i].isAlive()) {
                return false;
            }
        }
        return true;
    }
    void nextRound() {
        this->round++;
        this->printPlayersInfo();
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (i != j) {
                    int damage = list[i].damage();
                    list[j].setHP(list[j].GetHP() - damage);
                    cout << list[i].Getname() << " shot " << list[j].Getname() << " for " << damage << " damage!" << endl;
                }
            }
            
        }
    };
};
int main()
{
    Game first;
    first.Start();
    while (first.getRound() < 10){first.nextRound();}
}
