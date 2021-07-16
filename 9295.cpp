#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector < pair<int, int>>k(n);
	for (int i = 0;i < n;i++) {
		cin >> k[i].first >> k[i].second;
		int sum = k[i].first + k[i].second;
		cout << "Case " << i + 1 << ": " << sum << endl;
	}
}
