#include <iostream>
using namespace std;

class Alphabet {
private:
	string morze[26];
public:
	Alphabet() {
        morze[0] = ".-",  morze[1] = "-...", morze[2] = "-.-.",morze[3] = "-..", morze[4] = ".",    morze[5] = "..-.",
		morze[6] = "--.", morze[7] = "....", morze[8] = "..",  morze[9] = ".---",morze[10]= "-.-",  morze[11]= ".-..",
		morze[12]= "--",  morze[13]= "-.",   morze[14]= "---", morze[15]= ".--.",morze[16]= "--.-", morze[17]= ".-.",
		morze[18]= "...", morze[19]= "-",	 morze[20]= "..-", morze[21]= "...-",morze[22]= ".--",	morze[23]= "-..-",
		morze[24]= "-.--",morze[25]= "--..";
}
    string getMorze(int index) { return morze[index]; }
};

class Encoding : public Alphabet {
public:
    string text(const string& word){
        string encrypted_word;
        for (char c : word) {
            if (c >= 'A' && c <= 'Z') {
                int index = c - 'A';
                encrypted_word += getMorze(index) + " | ";
            } else if (c == ' ') {
                encrypted_word += " ";
            }
        }
        return encrypted_word;
    }
};

class Decoding : public Alphabet{
public:
};

int main() {
    string word;
    int choice;
    Encoding en;
    cout << "   ---------------------" << "\n";
	cout << "   | Виберіть операцію: |" << "\n";
	cout << "   |  1 - Зашифрувати   |" << "\n";
	cout << "   |  2 - Розшифрувати  |" << "\n";
	cout << "   ---------------------" << "\n\n";
    cin >> choice;
    cout << "Введіть слово: " << endl;
    cin >> word;

    string encrypted_word = en.text(word);
    cout << "Входной текст: " << word << endl;
    cout << "Азбука морзе: " << encrypted_word << "\n\n";
    string decrypted_word;
    cout << "Входной текст: " << encrypted_word << endl;
	cout << "Rashyfrovonoe слово: " << decrypted_word << endl;
}