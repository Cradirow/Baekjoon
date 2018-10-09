//
//  main.cpp
//  10039
//
//  Created by Han YunBum on 2017. 1. 23..
//  Copyright © 2017년 Hanorange. All rights reserved.
//

#include <iostream>

#include <string>
using namespace std;

int main() {
    int arr[5];
    int sum = 0;
    for (int i = 0; i < 5; i++)
        cin >> arr[i];
    for (int i = 0; i < 5; i++) {
        if (arr[i] < 40) arr[i] = 40;
        sum += arr[i];
    }
    cout << sum / 5 << endl;
    
    return 0;
}
