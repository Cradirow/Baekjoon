#include <iostream>
using namespace std;

int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	int min_x;
	int min_y;

	if (x > w - x) min_x = w - x;
	else min_x = x;

	if (y > h - y) min_y = h - y;
	else min_y = y;

	if (min_x >= min_y) cout << min_y;
	else cout << min_x;

	system("pause");
	return 0;
}