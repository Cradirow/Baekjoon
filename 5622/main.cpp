//
//  main.cpp
//  5622
//
//  Created by Han YunBum on 2017. 2. 23..
//  Copyright © 2017년 Hanorange. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string tel;
    cin >> tel;
    int result=0;
    int *arr = new int[tel.size()];
    
    for (int i = 0; i < tel.size(); i++) {
        if (tel[i] == 'A' || tel[i] == 'B' || tel[i] == 'C') arr[i] = 3;
        else if (tel[i] == 'D' || tel[i] == 'E' || tel[i] == 'F') arr[i] = 4;
        else if (tel[i] == 'G' || tel[i] == 'H' || tel[i] == 'I') arr[i] = 5;
        else if (tel[i] == 'J' || tel[i] == 'K' || tel[i] == 'L') arr[i] = 6;
        else if (tel[i] == 'M' || tel[i] == 'N' || tel[i] == 'O') arr[i] = 7;
        else if (tel[i] == 'P' || tel[i] == 'Q' || tel[i] == 'R' || tel[i] == 'S') arr[i] = 8;
        else if (tel[i] == 'T' || tel[i] == 'U' || tel[i] == 'V') arr[i] = 9;
        else if (tel[i] == 'W' || tel[i] == 'X' || tel[i] == 'Y' || tel[i] == 'Z') arr[i] = 10;
    }
    for (int i = 0; i < tel.size(); i++)
        result += arr[i];
    
    cout << result << endl;
    return 0;
}
