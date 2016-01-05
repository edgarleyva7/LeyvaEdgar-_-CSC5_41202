/* 
  File:   main.cpp
  Author: Edgar Leyva
  Created on January 4, 2016, 10:18 AM
  Purpose: Check out IDE
 */

//System Libraries
#include <iostream>
using namespace std;

// User Libraries

//Global Libraries

// Functional Prototypes


//Execution begins here
int main(int argc, char** argv) {

    // Declare and initialize variables
    float payRate=1e1f;//Pay Rate in $'s?hour
    unsigned char hrsWrkd=40;//Hours Worked (hrs)
    
    //Input data
    
    //Calculate or map inputs to outputs
    float payChk=payRate*hrsWrkd;//Pay check ($'s)
    
    //Output the results
    cout<<"Pay Rate      =$'s"<<payRate<<"/hr" <<endl;
    cout<<"Hours Worked  =" <<static_cast<int>(hrsWrkd)<<"hrs"<<endl;
    cout<<"Pay check     = $"<<payChk<<endl;
    
    //Exit stage right
    return 0;
}

