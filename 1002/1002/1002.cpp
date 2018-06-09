// 1002.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int T; cin >> T;
	int x1, y1, r1, x2, y2, r2;
	for (int i = 0; i < T; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		double d = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
		int ans;
		if (d == 0.0) {
			if (r1 == r2)
				ans = -1;
			else
				ans = 0;
		}
		else {
			if (abs(r1 - r2) < d && d < (r1 + r2)) {
				ans = 2;
			}
			else if (abs(r1 - r2) == d || (r1 + r2) == d) {
				ans = 1;
			}
			else
				ans = 0;
		}
		cout << ans << endl;
	}
    return 0;
}

