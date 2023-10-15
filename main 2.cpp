#include <iostream>
using namespace std;
class Book{
private:
    string title;
    string author;
    string isbn;
    int year;
    bool available;
public:
    string GetTitle(){ return title; }
    string GetAuthor(){ return author; }
    string GetISBN(){ return isbn; }
    int GetYear() { return year; }
    bool GetAvailable() { return available; }
};
class Library{
private:
    Book books[2];
    int numbooks;
public:
    Library() : numbooks(0) {}
    void AddBook(const Book& book){
        if(numbooks < 2){
            books[numbooks] = book;
            numbooks++;
            std::cout << "Книга додана до каталогу." << std::endl;
        }
    }
    void RemoveBook(const string& isbn){
    }
    void SearchByAuthor(const string& author){
        cout << "Список по Авторам: " << author << endl;
    }
    void SaerchByTitle(const string& title){
    }
    void ListAvailableBooks(){
    }
};
int main(){
    Library library;
    int choice;
    while (true) {
        cout << "\nMenu:" << endl;
        cout << "1. Add book" << endl;
        cout << "2. Remove book" << endl;
        cout << "3. SearchByAuthor" << endl;
        cout << "4. SaerchByTitle" << endl;
        cout << "5. ListAvailableBooks" << endl;
        cout << "0. Exit" << endl;
        cout << "Vyberete operation: ";
        cin >> choice;
        switch (choice){
            case 1: {
                string title, author, isbn;
                int year;
                cout << "Ведите title: " << endl;
                cin >> title;
                cout << "Ведите Автора: " << endl;
                cin >> author;
                cout << "Ведите год: " << endl;
                cin >> year;
                cout << "Ведите isbn: " << endl;
                cin >> isbn;
                break;
            }
            case 2 : {
            }
            case 3: {
                string author;
                cout << "Введіть ім'я автора для пошуку: ";
                cin >> author;
                library.SearchByAuthor(author);
                break;
            }
        }
    }
}
