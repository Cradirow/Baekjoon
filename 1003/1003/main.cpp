//
//  main.cpp
//  1003
//
//  Created by Han YunBum on 2017. 11. 28..
//  Copyright © 2017년 Hanorange. All rights reserved.
//

#include <iostream>
using namespace std;

int num0, num1;
int Pib(int N);
int main(int argc, const char * argv[]) {
    int test_case;
    cin >> test_case;
    int N;
    for(int T=0; T<test_case; T++){
        num0 = 0; num1 = 0;
        cin >> N;
        Pib(N);
        cout << num0 << " " << num1 << endl;
    }
}

int Pib(int N){
    if(N==0){
        num0++;
        return 0;
    }else if(N==1){
        num1++;
        return 1;
    }else{
        return Pib(N-1) + Pib(N-2);
    }
}
