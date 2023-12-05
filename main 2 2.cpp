#include <iostream>
using namespace std;
class Weapon {
protected:
    unsigned short damage;
    unsigned short weight;
    unsigned short numberOfCartridgesInTheClip;
    unsigned short numberOfClips;
    unsigned short accuracy; // 0.1 -> 0.9
    double rateOfFire; // 0.1 -> 0.9
    string nameOfWeapon;
public:
    unsigned short getDamage() { return this->damage; }
    unsigned short getWeight() { return this->weight; }
    unsigned short getNumberOfCartridgesInTheClip() { return this->numberOfCartridgesInTheClip; }
    unsigned short getNumberOfClips() { return this->numberOfClips; }
    unsigned short getAccuracy() { return this->accuracy; }
    string getNameofWeapon() { return this->nameOfWeapon; }
    double getRateOfFire() { return this->rateOfFire; }
    
    void WeaponInfo() {
        cout << "Weapon Name: " << nameOfWeapon << endl;
        cout << "Damage: " << damage << endl;
        cout << "Weight: " << weight << endl;
        cout << "Cartridges in the Clip: " << numberOfCartridgesInTheClip << endl;
        cout << "Number of Clips: " << numberOfClips << endl;
        cout << "Accuracy: " << accuracy << endl;
        cout << "Rate of Fire: " << rateOfFire << endl;
    }
};
class Empty : public Weapon {
public:
    Empty() {
        this->damage = 5;
        this->weight = 0;
        this->numberOfCartridgesInTheClip = 1000;
        this->numberOfClips = 0;
        this->accuracy = 0.6;
        this->rateOfFire = 0.9;
        this->nameOfWeapon = "Empty";
    }
};
class Glock : public Weapon {
public:
    Glock() {
        this->damage = 15;
        this->weight = 25;
        this->numberOfCartridgesInTheClip = 17;
        this->numberOfClips = 5;
        this->accuracy = 0.6;
        this->rateOfFire = 0.7;
        this->nameOfWeapon = "Glock";
    }
};
class AK47 : public Weapon {
public:
    AK47() {
        this->damage = 55;
        this->weight = 90;
        this->numberOfCartridgesInTheClip = 30;
        this->numberOfClips = 4;
        this->accuracy = 0.7;
        this->rateOfFire = 0.9;
        this->nameOfWeapon = "AK47";
    }
};
class M4A1 : public Weapon {
public:
    M4A1() {
        this->damage = 50;
        this->weight = 80;
        this->numberOfCartridgesInTheClip = 20;
        this->numberOfClips = 4;
        this->accuracy = 0.8;
        this->rateOfFire = 0.9;
        this->nameOfWeapon = "M4A1";
    }
};
class ShotGun : public Weapon {
public:
    ShotGun() {
        this->damage = 90;
        this->weight = 80;
        this->numberOfCartridgesInTheClip = 7;
        this->numberOfClips = 4;
        this->accuracy = 0.4;
        this->rateOfFire = 0.6;
        this->nameOfWeapon = "ShortGun";
    }
};
class Character {
protected:
    // unsigned short 0 -> 65535
    unsigned short hp = 100;
    unsigned short speed = 255;
    unsigned short armor = 0;
    unsigned short stamina = 0;
    Weapon weapon;
    void getW() {
        Empty e;
        Glock g;
        AK47 ak;
        M4A1 ma;
        if (rand()) {
            this->weapon = e;
        }
        if (rand()) {
            this->weapon = g;
        }
    }
public:
    Character() {
        getW();
    }
    void openFire(Character character) {
        this->weapon.getDamage();
        if(this->weapon.getDamage() > character.armor){
            character.hp -= (this->weapon.getDamage() - character.armor);
            cout << "Player has fired a shot, dealing " << this->weapon.getDamage() << " damage to the target!" << endl;
            this->weapon.WeaponInfo();
            cout << endl;
        }
    }
};
int main()
{
    Character first, second;
    first.openFire(second);
}
