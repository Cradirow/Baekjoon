#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	string str; cin >> str;
	stack<int> s;
	int count = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '(') {
			s.push(1);
		}
		else {
			if (str[i - 1] == '(') {
				s.pop();
				count += s.size();
			}
			else {
				s.pop();
				count++;
			}
		}
	}
	cout << count << endl;
	system("pause");
}