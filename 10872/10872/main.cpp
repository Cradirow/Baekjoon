#include <iostream>
using namespace std;

int factorial(int n);

int main() {

	int n; scanf_s("%d", &n);
	int result = factorial(n);
	printf("%d", result);
	system("pause");
	return 0;
}

int factorial(int n) {
	if (n == 0) return 1;
	if (n == 1) return 1;
	else {
		return n * factorial(n - 1);
	}
}