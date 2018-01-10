//
//  main.cpp
//  6064
//
//  Created by Han YunBum on 2017. 9. 20..
//  Copyright © 2017년 Hanorange. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int T;
    cin >> T;
    int M, N, x, y;
    for(int test_cast = 0; test_cast < T; test_cast++){
        int k, gap;
        cin >> M >> N >> x >> y;
        if(x == y){
            cout << x << endl;
        }else{
            int min = 0;
            if(x > y) min = y;
            else min = x;
            k = min;
            gap = abs(M - N);
            for(int i = 1; i < N/gap; i++){
                if(y == (N + min - gap * i) % N){
                    k += M * i;
                }
            }
            cout << k << endl;
        }
    }
}
