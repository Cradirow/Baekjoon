//
//  main.cpp
//  1193
//
//  Created by Han YunBum on 2017. 9. 10..
//  Copyright © 2017년 Hanorange. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int N;
    cin >> N;
    int max;
    for(int i=0; i<N; i++){
        if(N <= i*(i+1)/2){
            max = i;
            break;
        }
    }
    int min = max*(max-1)/2;
    int p = N-min;
    
    if(max%2 == 1){
        cout << max-(p-1) << "/" << 1+(p-1) << endl;
    }else{
        cout << 1+(p-1) << "/" << max-(p-1) << endl;
    }
    
    return 0;
}
