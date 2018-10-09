//
//  main.cpp
//  2744
//
//  Created by Han YunBum on 2018. 1. 5..
//  Copyright © 2018년 Hanorange. All rights reserved.
//
//  65 ~ 90 : A ~ Z
//  97 ~ 122 : a ~ z

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word;
    int size = word.size();
    for(int i=0; i<size; i++){
        if(word[i] >= 97){
            word[i] -= 32;
        }else{
            word[i] += 32;
        }
    }
    cout << word << endl;
}
