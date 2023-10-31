#include <iostream>
#include <math.h>
using namespace std;
// 1 1 2 5 8 13 21 ... 
// ТЗ: числа від 0
// => first , second
class Progression {
private:
	unsigned long first;
	unsigned long second;
public:
	Progression(unsigned long first, unsigned long second) {
		this->first = first;
		this->second = second;
	}
	unsigned long GetNumber(unsigned long n = 3)
	{
		while(second <= n){
			int temp = second;
			second += first;
			first = temp;
		}
	}
};
int main()
{
	Progression pr{1, 1};
}