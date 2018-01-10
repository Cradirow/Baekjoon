//
//  main.cpp
//  2953
//
//  Created by Han YunBum on 2018. 1. 10..
//  Copyright © 2018년 Hanorange. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int arr[5][5];
    for(int i=0; i<5; i++){
        for(int j=0; j<4; j++){
            cin >> arr[i][j];
        }
    }
    int max = 0;
    for(int i=0; i<5; i++){
        arr[i][4] = arr[i][0]+arr[i][1]+arr[i][2]+arr[i][3];
        if(max <= arr[i][4]) max = arr[i][4];
    }
    for(int i=0; i<5; i++){
        if(arr[i][4] == max)
            cout << i+1 << " " << max << "\n";
    }
    return 0;
}
