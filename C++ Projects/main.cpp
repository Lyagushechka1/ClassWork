#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int age;
};

Student olderStudent(Student students[], int size)
{
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (students[i].age < students[j].age) {
                Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
    return students[0];
}

int main()
{
    Student newList[3]
    {
        {"Vlad", 19},
        {"Maxim", 18},
        {"Oleg", 20}
    };
    olderStudent(newList, 3);
    for (int i = 0; i < 3; i++) {
        cout << "Имя: " << newList[i].name << ", Возраст: " << newList[i].age << endl;
    }
}
