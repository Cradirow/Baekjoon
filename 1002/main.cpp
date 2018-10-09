//
//  main.cpp
//  1002
//
//  Created by Han YunBum on 2017. 12. 2..
//  Copyright © 2017년 Hanorange. All rights reserved.
//

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
