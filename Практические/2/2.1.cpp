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
    float a, b, n, m;
    a = 4.8;
    b = -7.9;
    
    if(a >= b){
        n = pow ((a-b), (1.0/3.0));
    }
    else if (a<b) {
        n = a*a + (a-b)/sin(a*b);
    }

    if (n<b){
        m = (n+a)/(-b) + sqrt(sin(a)*sin(a) - cos(n));
    }
    else if ( n == b){
        m = b*b + tan(n*a);
    }
    else if (n > b) {
        m = b*b*b + n*a*a;
    }
    cout<<"a= "<<a<<endl<<"b = "<<b<<endl;
    cout<<"n = "<<n<<endl<<"m = "<<m<<endl;
    
    system("pause");
    return 0;
}


