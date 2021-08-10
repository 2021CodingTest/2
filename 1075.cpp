#include <iostream>

using namespace std;

int main()
{
	int N, F, value,num1;
	cin >> N >> F;
	num1 = (N / 100) * 100;
	value = (num1 / F) * F;
	while (value < num1) {
		value += F;
	}
	value %= 100;
	if (value < 10) {
		cout << "0" << value << endl;
	}
	else {
		cout << value << endl;
	}
	
}
