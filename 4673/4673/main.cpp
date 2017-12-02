//
//  main.cpp
//  4673
//
//  Created by Han YunBum on 2016. 12. 1..
//  Copyright © 2017년 Hanorange. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, sum = 0;
    int result = 1;
    int generator[11000];
    for (int i = 1; i <= 10000; i++)
        generator[i] = 0;
    
    for (int i = 1; i < 10000; i++)
    {
        a = i / 1000;
        b = i % 1000 / 100;
        c = i % 1000 % 100 / 10;
        d = i % 1000 % 100 % 10;
        sum = a + b + c + d;
        result += sum;
        generator[result] = result;
        result = i + 1;
    }
    
    for (int i = 1; i <= 10000; i++)
    {
        if (generator[i] == 0)
            cout << i << endl;
    }
}
