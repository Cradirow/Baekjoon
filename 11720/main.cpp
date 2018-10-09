//
//  main.cpp
//  11720
//
//  Created by Han YunBum on 2017. 2. 3..
//  Copyright © 2017년 Hanorange. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    int count, num = 0;
    string input;
    char temp;
    
    cin >> count;
    cin >> input;
    for (int i = 0; i < count; i++) {
        temp = input[i];
        num += temp - '0';
    }
    cout << num;
    return 0;
}
