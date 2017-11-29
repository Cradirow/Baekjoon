//
//  main.cpp
//  10250
//
//  Created by Han YunBum on 2017. 9. 17..
//  Copyright © 2017년 Hanorange. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    unsigned int T,H,W,N;
    int h,w;
    cin >> T;
    for(int i=0; i<T; i++){
        cin >> H >> W >> N;
        h = N%H;
        w = N/H;
        //나머지가 0이면
        if(h==0){
            if(w < 10)
                cout << H << "0" << w << endl;
            else
                cout << H << w << endl;
        }//나머지가 있다면
        else{
            w++;
            if(w < 10)
                cout << h << "0" << w << endl;
            else
                cout << h << w << endl;
        }
    }
    return 0;
}
