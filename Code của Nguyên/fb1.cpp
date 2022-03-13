#include <iostream>
#include <math.h>
using namespace std; // would never normally do this.

int main()
{
int target = 10;
cin >> target;
// should be close enough for anything that won't make us explode anyway.
float mangle = 2.23607610; 

float manglemore = mangle;
++manglemore; manglemore = manglemore / 2;
manglemore = pow(manglemore, target);
manglemore = manglemore/mangle;
manglemore += .5;
cout << floor(manglemore);

}