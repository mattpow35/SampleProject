//
//  controller.h
//  SampleProject
//
//  Created by Powley, Matthew on 1/27/17.
//  Copyright © 2017 Powley, Matthew. All rights reserved.
//

#ifndef controller_h
#define controller_h

class Controller
{
public:
    void start();
private:
    void tryNumbers(int sent);
    int changeNumber();
    void changeWithPointer(int * numberPointer);
    
    
};

#endif /* controller_h */
