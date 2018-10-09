#include <iostream>
#include <string>
using namespace std;

int arr[10003];
int main() {
	for (int i = 0; i < 10003; i++) arr[i] = 0;
	string A, B; cin >> A >> B;
	char c;
	int sizeA = A.size();
	int sizeB = B.size();

	if (sizeA >= sizeB) {
		for (int i = 0; i < sizeB; i++) {
			c = B[sizeB - i - 1];
			arr[i] += (c - '0');
		}
		for (int i = 0; i < sizeA; i++) {
			c = A[sizeA - i - 1];
			arr[i] += (c - '0');
			if (arr[i] >= 10) {
				arr[i] -= 10;
				arr[i + 1]++;
			}
		}
		if (arr[sizeA] != 0) sizeA++;
		for (int i = sizeA - 1; i >= 0; i--) {
			cout << arr[i];
		}
	}
	else {
		for (int i = 0; i < sizeA; i++) {
			c = A[sizeA - i - 1];
			arr[i] += (c - '0');
		}
		for (int i = 0; i < sizeB; i++) {
			c = B[sizeB - i - 1];
			arr[i] += (c - '0');
			if (arr[i] >= 10) {
				arr[i] -= 10;
				arr[i + 1]++;
			}
		}
		if (arr[sizeB] != 0) sizeB++;
		for (int i = sizeB - 1; i >= 0; i--) {
			cout << arr[i];
		}
	}
	cout << "\n";
	return 0;
}