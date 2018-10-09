//
//  main.cpp
//  2577
//
//  Created by Han YunBum on 2017. 2. 16..
//  Copyright © 2017년 Hanorange. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b, c, count;
    cin >> a >> b >> c;
    int R = a*b*c;
    string s = to_string(R);
    int arr[10];
    
    for (int i = 0; i < 10; i++) {
        count = 0;
        for (int j = 0; j < s.length(); j++)
            if (s[j] == i + 48) count++;
        arr[i] = count;
    }
    
    for (int i = 0; i < 10; i++)
        cout << arr[i] << "\n";
    
    return 0;
}
