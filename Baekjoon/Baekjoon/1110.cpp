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
    int num1, num2 = -1;
    int count = 0;
    cin >> num1;
    
    while(num2 == num1){
        if(num1 < 10){
            num2 = num1 + num1;
        }else{
            int d1 = num1/10;
            int d2 = num1%10;
            int d3 = d1 + d2;
            num2 = d2 + d3%10;
        }
        count++;
    }
    cout << count << endl;
    
    return 0;
}
