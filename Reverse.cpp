//  Reverse.cpp
//  Created by Raja on 3/4/2022.

#include "Reverse.h"
#include <iostream>
#include <math.h>

using namespace std;

Reverse::Reverse(){
}


int Reverse::reverseDigit(int val) {
    //invalid input returns error
    if(val < 0)
        return -1;
    //finds the number of digits in the value
    int digits = (int)log10(val);
    //returns 0
    if(val == 0)
        return 0;
    //recursion
    return ((val%10 * pow(10, digits)) + reverseDigit(val/10));
}


string Reverse::reverseString(string letters) {
    if(letters.length() == 1)
        return letters;
    else {
        return reverseString(letters.substr(1)) + letters[0];
    }
}
