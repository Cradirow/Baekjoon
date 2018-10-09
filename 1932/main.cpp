//
//  main.cpp
//  1932
//
//  Created by Han YunBum on 2018. 1. 3..
//  Copyright © 2018년 Hanorange. All rights reserved.
//
//  Dynamic Programming...

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int N; cin >> N;
    // alloc
    int** arr = new int*[N];
    for(int i=0; i<N; i++){
        arr[i] = new int[N];
    }
    int** dp = new int*[N];
    for(int i=0; i<N; i++){
        dp[i] = new int[N];
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            arr[i][j] = 0;
            dp[i][j] = 0;
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<=i; j++){
            cin >> arr[i][j];
        }
    }
    
    dp[0][0] = arr[0][0];
    for(int i=1; i<N; i++){
        for(int j=0; j<=i; j++){
            if(j==0)
                dp[i][j] = dp[i-1][0] + arr[i][0];
            else if(i==j)
                dp[i][j] = dp[i-1][j-1] + arr[i][j];
            else{
                dp[i][j] = max(dp[i-1][j-1] + arr[i][j], dp[i-1][j] + arr[i][j]);
            }
        }
    }
    int output = 0;
    for(int i=0; i<N; i++){
        if(dp[N-1][i] >= output) output = dp[N-1][i];
    }
    cout << output << endl;
    
    // release
    for(int i=0; i<N; i++){
        delete[] arr[i];
        delete[] dp[i];
    }
    delete[] arr;
    delete[] dp;
    
    return 0;
}

int max(int a, int b){
    if(a >= b) return a;
    else return b;
}
