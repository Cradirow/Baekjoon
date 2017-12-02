//
//  main.cpp
//  10817
//
//  Created by Han YunBum on 2017. 2. 3..
//  Copyright © 2017년 Hanorange. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int num1, num2, num3, result;
    cin >> num1 >> num2 >> num3;
    
    if (num1 >= num2) {
        if (num2 >= num3) result = num2;
        else {
            if (num1 >= num3) result = num3;
            else result = num1;
        }
    }
    else {
        if (num1 >= num3) result = num1;
        else {
            if (num2 >= num3) result = num3;
            else result = num2;
        }
    }
    cout << result << "\n";
    return 0;
}
