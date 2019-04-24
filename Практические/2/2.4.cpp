#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    float a, x, y, t;
    a = 3.5;
    x = -0.7;
    
    
    string y1;
    string t1;
    
    if (a<=x){
        y = a + log(x+a);
    }
    else{
        y = sqrt(fabs(sin(a*x)));
        y1 = "i* ";
        y1+=to_string(y);
    }
    
    if (a>y){
        t = y/(a-x);
        t1 = "i* ";
        t1 += to_string(t);
    }
    else if (a == y){
        t = y/(a-x) + (a+x)/(y*y);
    }
    else{
        t = tan(a*x) + cos(2*a*y);
    }
    
    
    cout<<"a= "<<a<<endl<<"x= "<<x<<endl;
    cout<<"y= "<<y1<<"    (i=sqrt(-1), y ∈ C)"<<endl<<"t= "<<t1<<"    (i= sqrt(-1), t ∈ C)"<<endl;
    
    system("pause");
    return 0;
}



