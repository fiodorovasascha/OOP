#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    float a, b;
    int a1, b1;
    cout<<"1 - дробные, 2 -целые"<<endl;
    int number;
    cin>>number;
    cout<<"Вводите числа: "<<endl;
    switch (number){
        case 1:
        cin>>a>>b;
        cout<<"a + b = "<<(a+b)<<endl;
        cout<<"a * b = "<<(a*b)<<endl;
        break;
        
        case 2:
        cin>>a1>>b1;
        cout<<"a + b = "<<(a1+b1)<<endl;
        cout<<"a * b = "<<(a1*b1)<<endl;
        break;
    }
    
    system("pause");
    return 0;
}


