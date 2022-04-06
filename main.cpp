#include <iostream>
#include <string>
#include "Reverse.h"
#include "Truckloads.h"

using namespace std;

int main()
{
  
    Reverse reverse;
    Truckloads truckloads;
    int i;
    string s;
    int numCrates;
    int loadSize;

    cin >> i >> s>> numCrates >> loadSize;
    cout << reverse.reverseDigit(i) << " " << reverse.reverseString(s) << " "<< truckloads.numTrucks(numCrates, loadSize) << " " << endl;
}
