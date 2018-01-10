//
//  main.cpp
//  2902
//
//  Created by Han YunBum on 2018. 1. 10..
//  Copyright © 2018년 Hanorange. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    string str; cin >> str;
    cout << str[0];
    for(int i=0; i<str.size(); i++){
        if(str[i] == '-')
            cout << str[i+1];
    } cout << "\n";
    return 0;
}
