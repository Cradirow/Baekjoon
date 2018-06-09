#include <iostream>
using namespace std;

int main() {
	int date; scanf_s("%d", &date);
	int car[5];
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &car[i]);
	}
	int count = 0;
	for (int i = 0; i < 5; i++) {
		if (date == car[i]) count++;
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}