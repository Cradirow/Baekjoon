#include <iostream>
using namespace std;

int main() {
	int price[5];
	for (int i = 0; i < 5; i++) {
		cin >> price[i];
	}
	int burger = price[0];
	for (int i = 1; i < 3; i++) {
		if (price[i] < burger) burger = price[i];
	}
	int beverage = price[3];
	if (price[4] < beverage) beverage = price[4];
	cout << burger + beverage - 50 << endl;

	system("pause");
	return 0;
}