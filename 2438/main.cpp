//
//  main.cpp
//  2438
//
//  Created by Han YunBum on 2017. 2. 3..
//  Copyright © 2017년 Hanorange. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int N; cin >> N;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << "\n";
    }
}
