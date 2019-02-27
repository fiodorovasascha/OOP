#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, y, t;
    a = 4.6;
    b = 1.5;
    
    if (a<=b){
        y = 1/(a-b);
    }
    else{
        y = a+ log(b*b);
    }
    
    if (y==b){
        t = (2*y + sqrt(y*y - a))/(2*b - sqrt(a*a - y));
    }
    else if (y < b){
        t = pow(sin(y), 2) + 1/(tan(a-b));
    }
    else {
        t = -pow(abs(y*sin(a)), (1.0/3.0)) + 1/sqrt(y*cos(b));
    }
    
    cout<<"a= "<<a<<endl<<"b= "<<b<<endl;
    cout<<"y= "<<y<<endl<<"t= "<<t<<endl;
    
    
    system("pause");
    return 0;
}



