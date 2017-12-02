//
//  main.cpp
//  11721
//
//  Created by Han YunBum on 2017. 2. 2..
//  Copyright © 2017년 Hanorange. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cin >> input;
    int size = input.length()/10;
    
    for (int i = 0; i < size; i++) {
        for (int j = i*10; j < (i+1) * 10; j++)
            cout << input[j];
        cout << "\n";
    }
    for (int i = size * 10; i < input.length(); i++)
        cout << input[i];
    cout << "\n";
    return 0;
}
