//
//  main.cpp
//  Baekjoon
//
//  Created by Han YunBum on 2017. 9. 6..
//  Copyright © 2017년 Hanorange. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int N;
    cin >> N;
    int** testCase = new int*[N];
    
    for(int i=0; i<N; i++){
        int sum = 0, count = 0;
        float arg=0.0, percentage=0.0;
        int tmp;
        cin >> tmp;
        testCase[i] = new int[tmp];
        
        for(int j=0; j<tmp; j++){
            cin >> testCase[i][j];
            sum += testCase[i][j];
        }
        
        arg = sum/tmp;
        for(int j=0; j<tmp; j++){
            if(testCase[i][j] > arg) count++;
        }
        
        percentage = (float)count/(float)tmp * 100;
        printf("%.3f", percentage); cout << "%" << endl;
        
    }
    
    
}
