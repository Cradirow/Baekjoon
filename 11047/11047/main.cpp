//
//  main.cpp
//  11047
//
//  Created by Han YunBum on 2018. 1. 9..
//  Copyright © 2018년 Hanorange. All rights reserved.
//

#include <iostream>
int main(int argc, const char * argv[]) {
    int N,K; std::cin >> N >> K;
    int *coins = new int[N];
    for(int i=0; i<N; i++)
        std::cin >> coins[i];
    int res = K;
    int count = 0; int temp;
    for(int i=N-1; i>=0; i--){
        if(coins[i] <= res){
            if(res == 0)
                break;
            temp = res / coins[i];
            count += temp;
            res -= temp * coins[i];
        }
    }
    std::cout << count << "\n";
    return 0;
}
