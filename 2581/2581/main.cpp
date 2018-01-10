//
//  main.cpp
//  2581
//
//  Created by Han YunBum on 2018. 1. 10..
//  Copyright © 2018년 Hanorange. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int M,N; cin >> M >> N;
    int *arr = new int[N+1];
    for(int i=2; i<=N; i++) arr[i] = i;
    for(int i=2; i<=N; i++){
        for(int j=2; j<=N; j++){
            if(arr[j] != i && arr[j]%i == 0)
                arr[j] = 0;
        }
    }
    int sum = 0;
    int min = 10001;
    for(int i=2; i<=N; i++){
        if(arr[i] >= M)
            sum += arr[i];
        if(arr[i] >= M && arr[i] <= min)
            min = arr[i];
    }
    if(sum == 0){
        cout << -1 << "\n";
    }
    else
        cout << sum << "\n" << min << "\n";
    return 0;
}
