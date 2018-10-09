//
//  main.cpp
//  1475
//
//  Created by Han YunBum on 2017. 9. 18..
//  Copyright © 2017년 Hanorange. All rights reserved.
//
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(void){
    string N;
    cin >> N;
    
    int arr[10] = {0};
    
    for(int i=0; i< N.size(); i++){
        arr[N[i] - '0']++;
    }
    
    int num =0;
    for(int i=0; i< 10; i++){
        if(i!=9 && i!=6) num = max(num, arr[i]);
    }
    
    cout << max(num, (arr[6] + arr[9] + 1) /2) << endl;
    return 0;
}
