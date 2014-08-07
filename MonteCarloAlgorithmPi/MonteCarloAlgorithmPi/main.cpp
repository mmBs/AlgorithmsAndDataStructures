//
//  main.cpp
//  MonteCarloAlgorithmPi
//
//  Created by Michal Bialas on 15/12/13.
//  Copyright (c) 2013 Michal Bialas. All rights reserved.
//

#include <iostream>
#include <cmath>

#define MAX_POINTS 1000000

using namespace std;

int main(int argc, const char * argv[]) {

    double pi, pointsIn = 0, xValue, yValue, functionValue;
        
    srand(time(NULL));
    for(int i = 0; i < MAX_POINTS; i++) {
            
        //xValue = ((double) rand()/RAND_MAX)*2-1;
        //yValue = ((double) rand()/RAND_MAX)*2-1;
        
        xValue = ((double) rand()/RAND_MAX);
        yValue = ((double) rand()/RAND_MAX);
        
        functionValue = (xValue * xValue) + (yValue * yValue);
            
        functionValue = sqrt(functionValue);
        if(functionValue <= 1) {
            pointsIn++;
        }
    }
    
    pi = 4 * pointsIn/MAX_POINTS;
    cout<<"The Pi value is: " << pi << endl;
    return 0;
}

