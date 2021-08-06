#include <iostream>
#include <functional>
#include <cstdio>
#include <queue>
using namespace std;

int main()
{
	int N, value;
	scanf("%d", &N);
	priority_queue< int, vector<int>, greater<int> > pq;
	for (int i = 0;i < N;i++) {
		scanf("%d", &value);
		switch (value) {
		case 0:
			if (pq.empty()) {
				cout << 0 << "\n";
			}
			else {
				cout << pq.top() << "\n";
				pq.pop();
			}
			break;
		default:
			pq.push(value);
			break;
		}
	}
	

}
