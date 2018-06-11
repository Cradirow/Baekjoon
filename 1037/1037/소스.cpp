#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n; cin >> n;
	int *arr = new int[n];
	unsigned long long mul = 1;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	mul = arr[0] * arr[n-1];
	cout << mul << endl;
	system("pause");
	return 0;
}