//
//  main.cpp
//  13698
//
//  Created by Han YunBum on 2018. 1. 5..
//  Copyright © 2018년 Hanorange. All rights reserved.
//

#include <iostream>
using namespace std;

void swap(int* arr, int a, int b);

int main(int argc, const char * argv[]) {
    string s;
    cin >> s;
    int ball[4];
    for(int i=0; i<4; i++) ball[i] = i;
    
    for(int i=0; i<s.size(); i++){
        if(s[i] == 'A'){
            swap(ball, 0, 1);
        }else if(s[i] == 'B'){
            swap(ball, 0, 2);
        }else if(s[i] == 'C'){
            swap(ball, 0, 3);
        }else if(s[i] == 'D'){
            swap(ball, 1, 2);
        }else if(s[i] == 'E'){
            swap(ball, 1, 3);
        }else if(s[i] == 'F'){
            swap(ball, 2, 3);
        }
    }
    for(int i=0; i<4; i++){
        if(ball[i] == 0) cout << i+1 << endl;
    }
    for(int i=0; i<4; i++){
        if(ball[i] == 3) cout << i+1 << endl;
    }
    return 0;
}

void swap(int* arr, int a, int b){
    int temp = arr[b];
    arr[b] = arr[a];
    arr[a] = temp;
}
