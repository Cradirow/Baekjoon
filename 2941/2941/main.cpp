//
//  main.cpp
//  2941
//
//  Created by Han YunBum on 2017. 2. 15..
//  Copyright © 2017년 Hanorange. All rights reserved.
//

#include<iostream>

using namespace std;



int main() {
    
    char buffer[100];
    
    int cnt = 0;
    
    
    
    cin >> buffer;
    
    
    
    for (int i = 0; buffer[i] != NULL; i++) {
        
        if (buffer[i] == '=' || buffer[i] == '-') buffer[i] = '0';
        
        if (buffer[i] == 'z' && buffer[i + 1] == '=' && buffer[i - 1] == 'd') buffer[i] = '0';
        
        if (buffer[i] == 'j' && (buffer[i - 1] == 'l' || buffer[i - 1] == 'n')) buffer[i] = '0';
        
    }
    
    
    
    for (int i = 0; buffer[i] != NULL; i++) {
        
        if (buffer[i] != '0') {
            
            cnt++;
            
        }
        
    }
    
    
    
    cout << cnt << endl;
    
}
