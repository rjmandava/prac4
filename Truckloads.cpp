//  Truckloads.cpp
//  Created by Raja on 4/4/2022.

#include "Truckloads.h"
#include <iostream>
#include <math.h>
Truckloads::Truckloads() {
}

int Truckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates<=0 || loadSize<=0 || numCrates>10000){
        return -1;}
    else if (numCrates<=loadSize){
        return 1;}

    if(numCrates%2 == 0){
       return 2*numTrucks(numCrates/2, loadSize);
    }
    else {
        return numTrucks((numCrates+1)/2, loadSize)+2*numTrucks(numCrates/2, loadSize);
    }
}
