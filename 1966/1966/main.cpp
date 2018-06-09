#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
	queue<int> q;
	queue<int> pq;
	int N, M, input;
	int test_case; cin >> test_case;
	for (int T = 0; T < test_case; T++) {
		cin >> N >> M;
		for (int i = 0; i < N; i++) {
			cin >> input;
			q.push(input);
		}
		pq = q;
		sort(pq.front(), pq.back());

		for (int i = 0; i < N; i++) {

		}
	}
}