#include <iostream>
using namespace std;

int main() {
	int T; cin >> T;
	int M, N, x, y;
	bool leftValueBig = true;

	while (T--) {
		int count = 0;
		bool isValid = true;
		cin >> M >> N >> x >> y;
		if (M >= N) leftValueBig = true;
		else leftValueBig = false;

		int j = 0;
		if (leftValueBig) {
			count += y;
			j = y;
		}
		else {
			count += x;
			j = x;
		}

		if (leftValueBig) {
			while (j != x) {
				j = (j + N) % M;
				count += N;
				if (count > M * N / 2) {
					isValid = false;
					break;
				}
			}
		}
		else {
			while (j != y) {
				j = (j + M) % N;
				count += M;
				if (count > M * N / 2) {
					isValid = false;
					break;
				}
			}
		}
		
		if (isValid) cout << count << endl;
		else cout << -1 << endl;
	}

	system("pause");
	return 0;
}

////10*12 = 120
//M	N
//3	3	//3
//3	(3 + 10) - 12 = 1
//3	(1 + 10) = 11
//3	(11 + 10) - 12 = 9
//3	(9 + 10) - 12 = 7
//3	5	//53
//4	6
//5	7
//6	8
//7	9
//8	10
//9	11
//10	12	//60
