#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	string str; cin >> str;
	vector<string> sv;
	string temp = str;
	for (int i = 0; i < str.size(); i++) {
		sv.push_back(temp);
		temp.erase(0, 1);
	}
	sort(sv.begin(), sv.end());
	for (int i = 0; i < str.size(); i++) {
		cout << sv[i] << endl;
	}

	system("pause");
	return 0;
}