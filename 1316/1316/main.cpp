//
//  main.cpp
//  1316
//
//  Created by Han YunBum on 2017. 9. 8..
//  Copyright © 2017년 Hanorange. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int arr[26];
int cnt,n,cur_s;
int main(){
    string s;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> s;
        cur_s = 0;
        for (int i = 0; i < s.size(); i++){
            if (arr[s[i] - 97] >= 1 && s[i] != s[i-1] && i!=0){
                cur_s = 1;
                break;
            }
            arr[s[i] - 97]++;
        }
        if (cur_s==0){
            cnt++;
        }
        for (int j = 0; j < 26; j++){
            arr[j] = 0;
        }
    }
    cout << cnt << endl;
}
