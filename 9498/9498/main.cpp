//
//  main.cpp
//  9498
//
//  Created by Han YunBum on 2017. 2. 8..
//  Copyright © 2017년 Hanorange. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int input; char result; cin >> input;
    if (input >= 90) result = 'A';
    else if (input >= 80) result = 'B';
    else if (input >= 70) result = 'C';
    else if (input >= 60) result = 'D';
    else result = 'F';
    cout << result << "\n";
    return 0;
}
