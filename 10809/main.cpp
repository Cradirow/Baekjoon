//
//  main.cpp
//  10809
//
//  Created by Han YunBum on 2017. 2. 5..
//  Copyright © 2017년 Hanorange. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    char a[101]; cin >> a;
    int arr[26];
    
    for (int i = 0; i < 26; i++)
        arr[i] = -1;
    
    for (int i = 0; a[i] != '\0'; i++) {
        for (int j = 97; j < 123; j++) {
            if ((int)a[i] == j && arr[j-97] == -1)
                arr[j - 97] = i;
        }
    }
    
    for (int i = 0; i < 26; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
