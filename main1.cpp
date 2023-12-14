#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int first, second, result;
    char operation;

    printf("Ведите первое число: \n");
    scanf("%d", &first);
    printf("Ведите второе число: \n");
    scanf("%d", &second);
    printf("Ведите операцию ( - | + | * | / ): \n");
    scanf("%s", &operation);
    
    auto add = [](int a, int b) { return a + b; };
    auto subtract = [](int a, int b) { return a - b; };
    auto multiply = [](int a, int b) { return a * b; };
    auto divide = [](int a, int b) { return a / b; };
    switch (operation)
    {
    case '+':
        result = add(first, second);
        break;
    case '-':
        result = subtract(first, second);
        break;
    case '*':
        result = multiply(first, second);
        break;
    case '/':
        result = divide(first, second);
        break;
    default:
        cout << "Нет такой операции";
        break;
    }
    cout << result;
}