#include <iostream>
using namespace std;

class Book {
private:
    class hour{
    public:
        int hour;
    };

    class day{
    public:
        int day;
        hour h[];
    };

    class month{
    public:
        int month;
        day d[];
    };
    class year{
    public:
        int year;
        month m[];
    };
    year a;
public:
    void create()
    {
        cout << "Ведите год: " << endl;
        cin >> a.year;
        cout << "Ведите месяй: " << endl;
        cin >> a.m->month;
        cout << "Ведите день: " << endl;
        cin >> a.m->d->day;
        cout << "Ведите время" << endl;
        cin >> a.m->d->h->hour;
        cout << "Запись создана успешно." << endl;
    }  
};

int main()
{
    Book book;
    int choice;
    cout << "Выберите вариант: " << endl;
    cout << "1 - Записать дату" << endl;
    cout << "2 - Редактировать дату" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        book.create();
        break;
    case 2:
        break;
    default:
        perror("Некорректный выбор");
    }
}