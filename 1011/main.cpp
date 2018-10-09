//
//  main.cpp
//  1011
//
//  Created by Han YunBum on 2017. 9. 13..
//  Copyright © 2017년 Hanorange. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int T;
    cin >> T;
    unsigned int x,y,h;
    bool isFind = false;
    for(int i=0; i<T; i++){
        cin >> x >> y;
        h = y-x;
        int ex = 1;
        while(!isFind){
            if(y-x < ex*ex) isFind = true;
            else ex++;
        }
        isFind = false;
        ex -= 1;
        int cnt = 2*ex - 1;
        if(h-ex*ex == 0){        }
        else if((h-ex*ex) <= ex){
            cnt++;
        }else{
            cnt += 2;
        }
        cout << cnt << endl;
    }
    return 0;
}
