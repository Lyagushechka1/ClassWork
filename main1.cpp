#include <iostream>
using namespace std;

class Entry{
private:
    string title;
    string description;
public:
    Entry getEntry(){
        Entry newEntry;
        newEntry.title = this->title;
        newEntry.description = this->description;
        return newEntry;
    }
};

class Time : public Entry{
private:
    static int hours;
    static int minutes;
    string time;
    Entry entry = this->getEntry();
    string outputime;
public:
    Time(int hours, int minutes){
        if(hours >= 0 && hours <= 24){
            this->hours = hours;
        }  
        if(minutes >= 0 && minutes <= 60){
            this->minutes = minutes;
        }
        outputime = hours + ":" + minutes;
    }
};

class Minutes{
public:
    Entry array[60];
};

class Hours{
public:
    Minutes minutes[60];
};

class Day {
public:
    Hours hours[24];
};

class Month{
public:
    string name;
    Day day[30];
};

class Year{
private:
    int year;
    string month[12] = {"Январь" ,"Февраль", "Март","Апрель" ,"Май"    ,"Июнь","Июль"   ,"Август" ,"Сентябрь","Октябвь","Ноябрь" , "Декабрь"};
public:
    int SetYear(int year){
        this->year = year;
    }
    int getYear(){
        return this->year;
    }
    string getmonth(int number){
        return this->month[number].name;
    }
};

class Book {
private:
    Year year;
public:
    void create(int year){
        this->year = year;
    }
    void showinfo(){
        cout << this->year.getYear();
    }
};


int main()
{
    Book mybook;
    mybook.create(2023);
    mybook.showinfo();
}