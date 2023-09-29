#include <iostream>

using namespace std;
class Bird{
public:
    string color;
    int weight;
    int height;
    Bird(){
        this->color = "";
        this->weight = 0;
        this->height = 0;
    }
};


class HomeParrot : public Bird{
public:
    string name;
    bool isSpeaking;
    bool trained;
    void Say(string word){
        cout << word << endl;
    }
};

class HawkBird : public Bird{
public:
    bool vision;
    bool speedOFflying;
    void Kind(int parrotname){
        cout << parrotname << endl;
    }
};
class Penguin : public Bird{
public:
    bool isSwiming;
    void Food(string food){
        cout << food << endl;
    }
};
class RatitesBird : public Bird{
public:
    bool withOutKeel;
    bool cantFly;
    void Habitat(string place){
        cout << place << endl;
    }
};
int main()
{
    HomeParrot pet;
    pet.Say("Hello");

    
    HawkBird bird;
    bird.Kind(290);
    
    
    Penguin birdwichcantfly;
    birdwichcantfly.Food("Fish");
    
    
    RatitesBird straus;
    straus.Habitat("Africa");
}
