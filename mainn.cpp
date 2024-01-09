#include <iostream>
#include <vector>
using namespace std;
class Expense{
private:
    double sum;
    string description;
    string date;
public:
    Expense(double sum, const string& description, string date) : sum(sum), description(description), date(date) {}
    double GetSum() const { return this->sum; }
};

class ExpenseTracker{
private:
    vector<Expense> expenses;
public:
    void Add(double sum, const string& description, const string& date){
        expenses.push_back(Expense(sum, description, date));
        cout << "Товар добавлен в список" << endl;
    }

    void DeleteLast(){
        expenses.pop_back();
        cout << "Последний товай удалён из списка" << endl;
    }

    void ShowAll(){
        for(const Expense& expense : expenses){
            cout << expense.GetSum();
        }
    }
};

int main(){
    ExpenseTracker ex;
    ex.Add(85, "Milk", "22.12.2023");
    ex.ShowAll();
}