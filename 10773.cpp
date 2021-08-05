#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int K, value, sum=0;
	std::stack<int> stk;

	cin >> K;

	for (int i = 0;i < K;i++) {
		cin >> value;
		if (value == 0) {
			stk.pop();
		}
		else {
			stk.push(value);
		}
	}

	int num = stk.size();
	for (int i = 0;i < num;i++) {
		sum += stk.top();
		stk.pop();
	}

	cout << sum;

}
