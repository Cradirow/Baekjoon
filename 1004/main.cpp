//
//  main.cpp
//  1004
//
//  Created by Han YunBum on 2017. 11. 29..
//  Copyright © 2017년 Hanorange. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    int Test_case;
    int x1, x2, y1, y2, N;
    int count;
    int nx, ny, nr;
    cin >> Test_case;
    for(int T=0; T<Test_case; T++){
        count = 0;
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> N;
        //1. 출발점과 시작점 모두 같은 원에 있는경우
        //2. 출발점과 시작점 모두 원 밖에 있는 경우
        //3. 출발점과 시작점 중 하나가 원 안에 있는 경우 +1
        for(int i=0; i<N; i++){
            cin >> nx >> ny >> nr;
            int n1 = pow((x1 - nx), 2) + pow((y1 - ny), 2);
            int n2 = pow((x2 - nx), 2) + pow((y2 - ny), 2);
            if(n1 < nr*nr && n2 > nr*nr){
                count++;
            }else if(n1 > nr*nr && n2 < nr*nr){
                count++;
            }
        }
        
        cout << count << endl;
    }
}
