//
//  main.cpp
//  11719
//
//  Created by Han YunBum on 2017. 1. 27..
//  Copyright © 2017년 Hanorange. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    int i = 100;
    string str;
    while (i>0) {
        getline(cin, str);
        
        cout << str << endl;
        i--;
    }
    
    return 0;
}
