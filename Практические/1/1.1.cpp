#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    setlocale (LC_ALL, "Russian");
    string name;
    cout<<"Введите Ваше имя: "<<endl;
    cin>>name;
    cout<<"Здравствуйте, "<<name<<"!"<<endl;

    system("pause");
    return 0;
}



