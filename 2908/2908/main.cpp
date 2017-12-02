//
//  main.cpp
//  2908
//
//  Created by Han YunBum on 2017. 1. 29..
//  Copyright © 2017년 Hanorange. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int quiz[2];
    int ziuq[2] = { 0,0 };
    int answer;
    cin >> quiz[0] >> quiz[1];
    
    for (int i = 0; i < 2; i++) {
        ziuq[i] = quiz[i] / 100;
        ziuq[i] += (quiz[i] % 100 / 10)*10;
        ziuq[i] += (quiz[i] % 100 % 10)*100;
    }
    
    if (ziuq[0] > ziuq[1])
        answer = ziuq[0];
    else
        answer = ziuq[1];
    
    cout << answer << endl;
    return 0;
}
