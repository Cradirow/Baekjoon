//
//  main.cpp
//  8393
//
//  Created by Han YunBum on 2017. 2. 10..
//  Copyright © 2017년 Hanorange. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int N; cin >> N;
    int sum = 0;
    for (int i = 1; i <= N; i++)
        sum += i;
    cout << sum << endl;
}
