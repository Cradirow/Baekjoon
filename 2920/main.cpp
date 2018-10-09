//
//  main.cpp
//  2920
//
//  Created by Han YunBum on 2017. 2. 13..
//  Copyright © 2017년 Hanorange. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    int arr[8];
    int num1=0,num2=0;
    for (int i = 0; i < 8; i++)
        cin >> arr[i];
    for (int i = 0; i < 8; i++) {
        if (arr[i] == i + 1)
            num1++;
        else if(arr[i] == 8 - i)
            num2++;
    }
    if (num1 == 8)
        cout << "ascending\n";
    else if (num2 == 8)
        cout << "descending\n";
    else
        cout << "mixed\n";
    
    return 0;
}
