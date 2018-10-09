//
//  main.cpp
//  1157
//
//  Created by Han YunBum on 2017. 9. 7..
//  Copyright © 2017년 Hanorange. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    string S;
    cin >> S;
    
    int arr[26];
    for(int i=0; i<26; i++)
        arr[i] = 0;
    //대문자와 소문자를 구분하지 않고 카운트 증가
    for(int i=0; i<S.length(); i++){
        if(int(S[i]) > 96){
            arr[S[i]-97]++;
        }else{
            arr[S[i]-65]++;
        }
    }
    //소팅을 통해 가장 많이 카운트된 문자열 찾음
    int max = 0;
    int ascii;
    for(int i=0; i<26; i++){
        if(arr[i] > max){
            max = arr[i];
            ascii = i;
        }
    }
    
    int tmp;
    for(int i=0; i<26; i++){
        for(int j=0; j<26; j++){
            if(arr[i] > arr[j]){
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    
    if(arr[0] == arr[1])
        cout << "?" << endl;
    else
        cout << char('A'+ascii) << endl;
    
}
