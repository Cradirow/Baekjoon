//
//  main.cpp
//  2839
//
//  Created by Han YunBum on 2017. 2. 3..
//  Copyright © 2017년 Hanorange. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int N, ans;
    
    //while (1) {
    cin >> N;
    
    if (N % 5 == 0)
        ans = N / 5;
    else if (N % 5 == 1)
        ans = (N - 1) / 5 + 1;
    else if (N % 5 == 2)
        ans = (N - 2) / 5 + 2;
    else if (N % 5 == 3)
        ans = N / 5 + 1;
    else if (N % 5 == 4)
        ans = (N - 4) / 5 + 2;
    else
        ans = -1;
    if (N == 4) ans = -1;
    if (N == 7) ans = -1;
    
    cout << ans << endl;
    //}
    
    return 0;
}
