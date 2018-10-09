//
//  main.cpp
//  2775
//
//  Created by Han YunBum on 2017. 9. 17..
//  Copyright © 2017년 Hanorange. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int T,k,n;
    cin >> T;
    for(int t=0; t<T; t++){
        cin >> k >> n;
        int arr[k+1][n+1];
        //초기화
        for(int i=0; i<=k; i++){
            for(int j=1; j<=n; j++)
                arr[i][j] = 0;
        }
        //0층 i호는 i+1값을 같는다.
        for(int i=1; i<=n; i++){
            arr[0][i] = i;
        }
        //i층 1호는 1이다.
        for(int i=0; i<=k; i++){
            arr[i][1] = 1;
        }
        for(int i=1; i<=k; i++){
            for(int j=2; j<=n; j++){
                arr[i][j] = arr[i][j-1] + arr[i-1][j];
            }
        }
        cout << arr[k][n] << endl;
    }
    return 0;
}
