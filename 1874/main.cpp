#include <iostream>
#include <stack>
using namespace std;

int main() {
	int n; cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	stack<int> s;
	for (int i = 0; i < n; i++) {
		s.push(i + 1);
	}

}