#include <stdio.h>
#include <iostream>
using namespace std;

struct Library{
    string author;
    string name;
    int year;
    int number;
    string language;
}
;
void returnnn(Library library){
    cout<<"Author: "<<library.author<<endl;
    cout<<"Title: "<<library.name<<endl;
    cout<<"Year of first publication: "<<library.year<<endl;
    cout<<"Number of pages: "<<library.number<<endl;
    cout<<"Language: "<<library.language<<endl<<endl;
}

int main()
{
    Library chechov = {"Chechov","The Lady With The Dog", 1899, 240, "Russian"};
    Library tolstoi = {"Tolstoi","War And Peace", 1869, 1225, "Russian"};

    returnnn(chechov);
    returnnn(tolstoi);
    
    return 0;
}
