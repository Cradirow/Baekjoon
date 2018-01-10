//
//  main.cpp
//  11655
//
//  Created by Han YunBum on 2018. 1. 5..
//  Copyright © 2018년 Hanorange. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    string S;
    getline(cin,S);
    for(int i=0; i<S.size(); i++){
        if(S[i]>=65 && S[i]<=77){
            S[i] += 13;
        }else if(S[i]>77 && S[i]<=90){
            S[i] -= 13;
        }else if(S[i]>=97 && S[i]<=109){
            S[i] += 13;
        }else if(S[i]>109 && S[i]<=122){
            S[i] -= 13;
        }
    }
    
    cout << S << endl;
    return 0;
}
