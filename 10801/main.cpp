//
//  main.cpp
//  10801
//
//  Created by Han YunBum on 2018. 1. 5..
//  Copyright © 2018년 Hanorange. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int card_A[10];
    int card_B[10];
    int win_A = 0, win_B = 0, draw = 0;
    for(int i=0; i<10; i++){
        cin >> card_A[i];
    }
    for(int i=0; i<10; i++){
        cin >> card_B[i];
    }
    for(int i=0; i<10; i++){
        if(card_A[i] > card_B[i]) win_A++;
        else if(card_B[i] > card_A[i]) win_B++;
        else draw++;
    }
    if(win_A > win_B) cout << "A" << endl;
    else if(win_B > win_A) cout << "B" << endl;
    else cout << "D" << endl;
    
    return 0;
}
