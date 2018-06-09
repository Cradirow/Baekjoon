//
//  main.cpp
//  5430
//
//  Created by Han YunBum on 2018. 5. 18..
//  Copyright © 2018년 Hanorange. All rights reserved.
//

#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main(int argc, const char * argv[]) {
	int test_case; cin >> test_case;
	string func, input;
	int n;
	bool isReverse;
	bool isError;
	while (test_case--) {
		deque<int> d;
		isReverse = false;
		isError = false;
		cin >> func >> n;

		char c; int num;
		cin >> c;
		for (int i = 0; i<n; i++) {
			cin >> num >> c;
			d.push_back(num);
		}

		for (int i = 0; i<func.size(); i++) {
			if (func[i] == 'R') {
				if (isReverse) isReverse = false;
				else isReverse = true;
			}
			else {
				if (d.empty()) {
					isError = true;
					break;
				}
				else {
					if (isReverse) d.pop_back();
					else d.pop_front();
				}
			}
		}

		if (isError) {
			cout << "error\n";
		}
		else {
			if (d.empty()) {
				cout << "[]\n";
			}
			else {

				if (isReverse) {
					cout << "[";
					for (int i = d.size() - 1; i>0; i--) {
						cout << d[i] << ",";
					}cout << d[0] << "]\n";
				}
				else {
					cout << "[";
					for (int i = 0; i<d.size() - 1; i++) {
						cout << d[i] << ",";
					}cout << d[d.size() - 1] << "]\n";
				}
			}
		}
	}

	system("pause");
	return 0;
}