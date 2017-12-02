//
//  main.cpp
//  10871
//
//  Created by Han YunBum on 2017. 12. 2..
//  Copyright © 2017년 Hanorange. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int a,X;
    int count = 0;
    cin >> a >> X;
    
    int *arr = new int[a];
    
    for (int i = 0; i < a; i++) {
        cin >> arr[i];
        if (arr[i] < X) {
            cout << arr[i] << " ";
        }
    }
    cout << "\n";
    
    return 0;
}
