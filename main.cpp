#include <algorithm>
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
    
class Person {
private :
    string name;
    int age;
public:
    /*Person(string n, int a) {
        this->name = n;
        this->age = a;
    }*/
    Person(string n, int a) : name(std::move(n)), age(a) {}
    string getName() const {return name;}
    int getAge() const {return age;}
};
    
class Town {
private:
    int floor;
    int apartments;
    int firstFloor;
public:
    Town(int f, int a) : floor(f), apartments(a), firstFloor(rand() % 2){}
    int getFloor() const { return floor; }
    int getApartments() const { return apartments; }
};
    
int main()
{
    vector <Town> houses = {
        Town{11, 4},
        Town{4, 6},
        Town{2, 10},
    };
    auto a = [](const Town& a, const Town& b) { return a.getFloor() * a.getApartments() < b.getFloor() * b.getApartments(); };
    sort(houses.begin(), houses.end(), a);
    for (const auto& i : houses) {
        cout << i.getFloor() << "-" << i.getApartments()<< endl;
    }
}
