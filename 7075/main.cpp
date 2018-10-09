#include <iostream>
#include <queue>
using namespace std;

int main() {
	int M, N; cin >> M >> N;
	queue<pair<int, int>> q;
	int** tomato = new int*[N + 2];
	for (int i = 0; i < N + 2; i++) {
		tomato[i] = new int[M + 2];
	}

	int empty = 0;
	int well_tomato = 0;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			cin >> tomato[i][j];
			if (tomato[i][j] == 1) {
				q.push(make_pair(i, j));
				well_tomato++;
			}
			else if (tomato[i][j] == -1) empty++;
		}
	}

	int day = 0;
	bool isSuccess = false;
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		if (tomato[x][y - 1] == 0) {
			tomato[x][y - 1] == 1;
			well_tomato++;
			q.push(make_pair(x, y - 1));
		}
		if (tomato[x][y + 1] == 0) {
			tomato[x][y + 1] == 1;
			well_tomato++;
			q.push(make_pair(x, y + 1));
		}
		if (tomato[x - 1][y] == 0) {
			tomato[x - 1][y] == 1;
			well_tomato++;
			q.push(make_pair(x - 1, y));
		}
		if (tomato[x + 1][y] == 0) {
			tomato[x + 1][y] == 1;
			well_tomato++;
			q.push(make_pair(x + 1, y));
		}
		q.pop();
		day++;
	}

	if(well_tomato + empty == M*N) printf("%d\n", day);
	else printf("%d\n", -1);

	return 0;
}