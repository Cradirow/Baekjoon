//
//  main.cpp
//  2605
//
//  Created by Han YunBum on 2018. 1. 5..
//  Copyright © 2018년 Hanorange. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int N; cin >> N;
    int* student = new int[N];
    for(int i=0; i<N; i++){
        student[i] = i+1;
    }
    int* arr = new int[N];
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }
    int temp;
    for(int i=1; i<N; i++){
        temp = student[i];
        for(int j=0; j<arr[i]; j++){
            student[i-j] = student[i-j-1];
        }
        student[i-arr[i]] = temp;
    }
    
    for(int i=0; i<N; i++){
        cout << student[i] << " ";
    }
    cout << endl;
    return 0;
}

/*
 student[i]를 임시변수에 저장한 뒤
 stu[i-arr[i]]에서 stu[i-1]에 해당하는 배열을 1만큼 밀고,
 stu[i-arr[i]]에 임시변수를 삽입한다.
 */
