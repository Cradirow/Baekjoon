//
//  1110.cpp
//  Baekjoon
//
//  Created by Han YunBum on 2017. 9. 6..
//  Copyright © 2017년 Hanorange. All rights reserved.
//

#include <iostream>
using namespace std;

int main(void){
    int N;
    int count = 0;
    cin >> N;
    int num1 = N;
    int num2 = -1;
    
    while(num2 != N){
        if(num1 < 10){
            num2 = num1*10 + num1;
        }else{
            int d1 = num1/10;
            int d2 = num1%10;
            int d3 = d1 + d2;
            if(d3 == 0) num2 = d2*10;
            else{
                num2 = d2*10 + d3%10;
            }
        }
        count++;
        num1 = num2;
    }
    cout << count << endl;
    
    return 0;
}
