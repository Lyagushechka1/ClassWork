#include <iostream>
using namespace std;
string nameList[] = {"Danya", "Sasha", "Gleb", "Vova", "Oleg", "Vitya", "Vanya", "Olya", "Sonya", "Ira", "Margarita", "Katya", "Kira", "Vladimir", "Kristina", "Maksim", "Artur", "Nikita"};
class Student{
private:
    int id;
public:
    string name = nameList[ rand () % 14 ];
    int mathAssessment;
    int physicsAssessment;
    void setID( int inputID ) { id = inputID ; }
    int GetId() { return id ; }
};
class SchoolClass {
public:
    Student allStudent[26];
    SchoolClass(){
        for(int i = 0; i < 26; i++){
            allStudent[i].mathAssessment = rand() % 12;
            allStudent[i].physicsAssessment = rand() % 12;
            allStudent[i].setID(i + 1);
        }
    }
    void Show(){
        for(int i = 0; i < 26; i++){
            cout << allStudent[i].name << " ";
            cout << allStudent[i].GetId() <<endl;
        }
    }
    void printBestStudent() {
        Student bestStudent = allStudent[0];
        for (int i = 1; i < 26; i++) {
            if ((allStudent[i].mathAssessment + allStudent[i].physicsAssessment) / 2.0 > (bestStudent.mathAssessment + bestStudent.physicsAssessment) / 2.0) {
                bestStudent = allStudent[i];
            }
        }

        cout << endl << "Best Student name: " << bestStudent.name << " His/Her ID: " << bestStudent.GetId() <<"\n\n";
    }
    void printAverageGrade() {
        double totalGrades = 0.0;
        for (int i = 0; i < 26; i++) {
            totalGrades += (allStudent[i].mathAssessment + allStudent[i].physicsAssessment) / 2.0;
        }
        double averageGrade = totalGrades / 26.0;
        cout << "Average Grade: " << averageGrade <<"\n\n";
    }
};

int main(){
    SchoolClass A7;
    A7.Show();
    A7.printBestStudent();
    A7.printAverageGrade();
}
