#include <iostream>

using namespace std;

bool compare1(int a, int b) {
	return a > b;
}

bool compare2(int a, int b) {
	return a < b;
}

int main()
{
	int N;
	int A[50], B[50];
	cin >> N;
	for (int i = 0;i < N;i++)
		cin >> A[i];
	for (int i = 0;i < N;i++)
		cin >> B[i];

	sort(A, A + N, compare1);
	sort(B, B + N, compare2);

	int res=0;
	for (int i = 0;i < N;i++) {
		res += A[i] * B[i];
	}

	cout << res;


	
}
