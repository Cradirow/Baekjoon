//
//  main.cpp
//  8958
//
//  Created by Han YunBum on 2017. 2. 9..
//  Copyright © 2017년 Hanorange. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int input;
    int cur = 0, result = 0;
    bool isX = false;
    cin >> input;
    int *arr = new int[input];
    char** quiz = new char*[input];
    
    for (int i = 0; i < input; i++) {
        quiz[i] = new char[80];
        cin >> quiz[i];
    }
    
    for (int i = 0; i < input; i++) {
        for (int j = 0; j < 80; j++) {
            if (quiz[i][j] == 'O')
                cur++;
            else if (quiz[i][j] != 'O')
            {
                result += cur*(cur + 1) / 2;
                cur = 0;
            }
        }
        arr[i] = result;
        result = 0;
    }
    
    for (int i = 0; i < input; i++)
        cout << arr[i] << "\n";
    
    return 0;
}
