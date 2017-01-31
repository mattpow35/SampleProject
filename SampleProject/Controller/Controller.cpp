//
//  Controller.cpp
//  SampleProject
//
//  Created by Powley, Matthew on 1/27/17.
//  Copyright © 2017 Powley, Matthew. All rights reserved.
//

#include <iostream>
#include "../Model/Timer.hpp"
#include "controller.h"


using namespace std;

void Controller :: start()
{
    Timer sillyTime;
    sillyTime.startTimer();
    
    int originalNumber = 0;

    int * numberPointer = &originalNumber;
    
    cout << "type a number here: ";
    cin >> originalNumber;
    this->tryNumbers(originalNumber);
    cout << "your original number is " << originalNumber << endl;
    
    originalNumber = changeNumber();
    cout << "changed? " << originalNumber << endl;

    changeWithPointer(numberPointer);
    cout << "changed? " << originalNumber << endl;
    
    sillyTime.stopTimer();
    sillyTime.displayTimerInformation();
    
    sillyTime.resetTimer();
    cout << sillyTime.getExecutionTimeInMicroseconds() << endl;
   
}

void Controller :: tryNumbers(int sent)
{
    cout << "your number is: " << sent << endl;
    sent = sent + 10;
    cout << "your number plus 10 is " << sent << endl;
 
}

int Controller :: changeNumber()
{
    return 42;
}

void Controller :: changeWithPointer(int * numberPointedTo)
{
    *numberPointedTo += 9000;
}


