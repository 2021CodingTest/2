#include <iostream>
#include <list>
#include <vector>
#include <deque>
using namespace std;


int main()
{
	int T, N;
	string value;
	cin >> T;

	deque<string> res;

	while (T > 0) {
		cin >> N;
		deque<string> deq;
		for (int i = 0;i < N;i++) {
			cin >> value;
			deq.insert(deq.begin() + i, value);
		}

		for (int i = 0;i < N;i++) {
			value = deq.front();
			deq.pop_front();
			if (i == 0) {
				res.insert(res.begin(),value);
				continue;
			}
			if (value <= res.front()) {
				res.push_front(value);
			}
			else {
				res.push_back(value);
			}
		}
		
		for (int i = 0;i < N;i++) {
			cout << res.front();
			res.pop_front();
		}
		cout << "\n";


		T--;
	}

}
