//
//  main.cpp
//  10430
//
//  Created by Han YunBum on 2017. 2. 7..
//  Copyright © 2017년 Hanorange. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int a, b, c, r;
    cin >> a >> b >> c;
    r = (a + b) % c;
    cout << r << endl;
    r = (a%c + b%c) % c;
    cout << r << endl;
    r = (a*b) % c;
    cout << r << endl;
    r = (a%c*b%c) % c;
    cout << r << endl;
    
    return 0;
}
