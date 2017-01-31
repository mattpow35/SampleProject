//
//  Timer.cpp
//  SampleProject
//
//  Created by Powley, Matthew on 1/31/17.
//  Copyright © 2017 Powley, Matthew. All rights reserved.
//

#include "Timer.hpp"
#include <iostream>

using namespace std;

Timer :: Timer()
{
    executionTime = 0;
}

void Timer :: resetTimer()
{
    executionTime = 0;
}

void Timer :: startTimer()
{
    executionTime = clock();
}

void Timer :: stopTimer()
{
    executionTime = clock() - executionTime;
}

void Timer :: displayTimerInformation()
{
    cout << "The execution time is: " << executionTime << endl;
    cout << "In human time is is: " << double (executionTime)/CLOCKS_PER_SEC << " seconds" << endl;
}

long Timer :: getExecutionTimeInMicroseconds()
{
    return executionTime;
}
