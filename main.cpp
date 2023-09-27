#include <iostream>
#include <string>
using namespace std;
class BankAccount {
private:
    string name;
    string id;
    int balance;
    unsigned long generateID(){
        static unsigned long generate = 0;
        return ++generate;
    }
public:
    BankAccount(string inputName, int inputBalance){
        name = inputName;
        balance = inputBalance;
        id = "N" + to_string(generateID());
    }
    string getID() { return id; }
    string getName() { return name; }
    int GetBalance() { return balance; }
    void Deposit(int addBalance) { balance += addBalance; }
    void Withdraw(int withdrawBalance){
        if (withdrawBalance > 0 && withdrawBalance <= balance) {
             balance -= withdrawBalance;
         } else {
             cout << "Недійсна сума для зняття або недостатньо коштів на рахунку." << std::endl;
         }
    }
    void DisplayInfo(){
        cout << "Ім'я власника: " << name << endl;
        cout << "Номер рахунку: " << id << endl;
        cout << "Поточний баланс: " << balance << " грн" << endl;
    }
};

class Bank{
private:
    BankAccount Account[100];
    string name = "Conor";
    string id;
    double balance;
    unsigned long generateID(){
        static unsigned long generate = 0;
        return ++generate;
    }
    void Info(string inputName){
        name = inputName;
    }
public:
    void checkInfo(string ID){
        ID = id;
        cout << "Name: "<< name <<endl;
    }
};

int main() {
    Bank MonoBank;
    MonoBank().checkInfo("N1");
}
