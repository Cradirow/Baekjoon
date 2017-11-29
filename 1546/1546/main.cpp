//
//  main.cpp
//  1546
//
//  Created by Han YunBum on 2017. 9. 6..
//  Copyright © 2017년 Hanorange. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int N;
    cin >> N;
    float* arr = new float[N];
    
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }
    
    int max = arr[0];
    for(int i=0; i<N; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    
    float sum = 0.0, arg;
    for(int i=0; i<N; i++){
        arr[i] = arr[i]/max * 100;
        sum += arr[i];
    }
    arg = sum/N;
    
    printf("%.2f", arg);
    
    return 0;
}
