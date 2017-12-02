//
//  main.cpp
//  11718
//
//  Created by Han YunBum on 2017. 1. 27..
//  Copyright © 2017년 Hanorange. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    while (1) {
        getline(cin, str);
        if (str == "")
            break;
        
        cout << str << endl;
        
    }
    
    return 0;
}
