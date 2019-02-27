/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, t, z;
    a = -0.6;
    b = 5.3;
    
    if (a<b){
        z = sqrt(fabs(a*a - b*b));
    }
    else {
        z = 1 - 2*cos(a)*sin(b);
    }

    if (z<b){
        t = pow((z + a*a*b), (1.0/3.0));
    }
    else if (z == b){
        t = 1 - log10(z) + cos(a*a*b);
    }
    else {
        t = 1 / (cos(z*a));
    }
    
    cout<<"a= "<<a<<endl<<"b= "<<b<<endl;
    cout<<"z= "<<z<<endl<<"t= "<<t<<endl;
    
    system("pause");
    return 0;
}


