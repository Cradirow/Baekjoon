//
//  main.cpp
//  6064
//
//  Created by Han YunBum on 2017. 9. 20..
//  Copyright © 2017년 Hanorange. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int T;
    cin >> T;
    unsigned int M,N,x,y;
    for(int i=0; i<T; i++){
        cin >> M >> N >> x >> y;
        int m = 1, n = 1;
        int count = 0;
        bool isFound = false;
        while(!isFound){
            if(m == x && n == y){
                isFound = true;
            }else if(m == M && n == N){
                break;
            }else{
                if(m == M) m = 0;
                if(n == N) n = 0;
                m++;
                n++;
                count++;
            }
        }
        if(isFound){
            cout << count+1 << endl;
        }else{
            cout << -1 << endl;
        }
    }
    return 0;
}
