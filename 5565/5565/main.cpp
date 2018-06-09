#include<iostream>
using namespace std;

int main() {
	int total; cin >> total;
	int price[9];
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		cin >> price[i];
		sum += price[i];
	}
	cout << total - sum << endl;

	system("pause");
	return 0;
}