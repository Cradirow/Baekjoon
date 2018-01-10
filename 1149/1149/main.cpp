//
//  main.cpp
//  1149
//
//  Created by Han YunBum on 2018. 1. 2..
//  Copyright © 2018년 Hanorange. All rights reserved.
//
//  Dynamic Programming...
//  R G B로 나누어 각각을 계산한 뒤 최솟값을 구하는 방법을 사용한다.

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int arr[1001][3];
    int N;  cin >> N;
    for(int i=0; i<N; i++){
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }
    int d[1001][3];
    d[0][0] = d[0][1] = d[0][2] = 0;
    for(int i=1; i<=N; i++){
        d[i][0] = min(d[i-1][1], d[i-1][2]) + arr[i-1][0];
        d[i][1] = min(d[i-1][0], d[i-1][2]) + arr[i-1][1];
        d[i][2] = min(d[i-1][0], d[i-1][1]) + arr[i-1][2];
    }
    cout << min(min(d[N][0], d[N][1]),d[N][2]) << endl;
}

int min(int a, int b){
    if(a >= b) return b;
    else return a;
}
