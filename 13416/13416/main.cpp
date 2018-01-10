//
//  main.cpp
//  13416
//
//  Created by Han YunBum on 2018. 1. 5..
//  Copyright © 2018년 Hanorange. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int T, N;
    cin >> T;
    
    for(int test_case = 0; test_case < T; test_case++){
        cin >> N;
        int **arr = new int*[N];
        for(int i=0; i<N; i++){
            arr[i] = new int[3];
        }
        for(int i=0; i<N; i++){
            for(int j=0; j<3; j++){
                cin >> arr[i][j];
            }
        }
        int money = 0;
        int max = 0;
        for(int i=0; i<N; i++){
            for(int j=0; j<3; j++){
                if(max <= arr[i][j]) max = arr[i][j];
            }
            if(max >= 0){
                money += max;
            }
            max = 0;
        }
        cout << money << endl;
    }
    return 0;
}
