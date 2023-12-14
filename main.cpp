#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    vector<string> List = {"Hello World", "Hello France", "Hello Germany", "Hello Netherland"};
    auto ab = [](string a, string b) { return a.length() < b.length(); };
    sort(List.begin(), List.end(), ab);
    for (const auto& line : List) {
        cout << line << endl;
    }
}