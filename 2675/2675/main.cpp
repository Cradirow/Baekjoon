//
//  main.cpp
//  2675
//
//  Created by Han YunBum on 2017. 9. 7..
//  Copyright © 2017년 Hanorange. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    string S1, S2;
    int N; cin >> N;
    for(int i=0; i<N; i++){
        int cnt;
        cin >> cnt;
        cin >> S1;
        int length = S1.size();
        for(int j=0; j<length; j++){
            for(int k=0; k<cnt; k++)
                cout << S1[j];
        }
        cout << endl;
    }
}
