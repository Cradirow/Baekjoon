//
//  main.cpp
//  2525
//
//  Created by Han YunBum on 2018. 1. 10..
//  Copyright © 2018년 Hanorange. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int h,m,duration;
    std::cin >> h >> m >> duration;
    int cal_h = h + duration/60;
    int cal_m = m + duration%60;
    int output_h, output_m;
    if(cal_m >= 60){
        output_m = cal_m - 60;
        cal_h++;
    }
    else
        output_m = cal_m;
    if(cal_h >= 24)
        output_h = cal_h - 24;
    else
        output_h = cal_h;
    
    
    std::cout << output_h << " " << output_m << "\n";
    
    return 0;
}
