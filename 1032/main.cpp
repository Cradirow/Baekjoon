//
//  main.cpp
//  1032
//
//  Created by Han YunBum on 2018. 1. 8..
//  Copyright © 2018년 Hanorange. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    int N;
    vector<string> compare;
    string input;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> input;
        compare.push_back(input);
    }
    string output = input;
    char temp;
    int n;
    for(int i=0; i<input.size(); i++){
        temp = input[i];
        n = 0;
        while(n<N){
            if(compare[n][i] != temp)
                output[i] = '?';
            n++;
        }
    }
    cout << output << endl;
}
