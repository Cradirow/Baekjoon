//
//  main.cpp
//  2441
//
//  Created by Han YunBum on 2017. 2. 4..
//  Copyright © 2017년 Hanorange. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int N; cin >> N;
    for (int i = 0; i < N; i++) {
        for (int k = i; k > 0; k--)
            cout << " ";
        for (int j = N; j > i; j--)
            cout << "*";
        
        cout << "\n";
    }
}
