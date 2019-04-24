#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime> // содержит time()
using namespace std;

class Automobiles{
    public:
    void set_auto_name(string auto_name){
        name = auto_name;
    }
    string get_auto_name (){
        return name;
    }
    
    void set_auto_region(int auto_region){
        region = auto_region;
    }
    int get_auto_region(){
        return region;
    }
    
    void set_auto_number( string auto_number){
        number = auto_number;
    }
    
    string get_auto_number (){
        return number;
    }
    
    
    
    private:
    string name;
    int region;
    string number;
}
;
int main()
{
    Automobiles automobile;
    int region;
    string name, number;
    
    cout<<"Please enter automobile`s brand "<<endl;
    cin>>name;
    cout<<"Please enter region you live in: ";
    cin>>region;
    
    automobile.set_auto_name(name);
    automobile.set_auto_region(region);
    
    srand(time(NULL));
    int n = rand();
    number = to_string(n);
    
    automobile.set_auto_number(number);
    
    cout<<"Your automobile`s brand is "<<automobile.get_auto_name()<<endl;
    cout<<"And your random number is "<<automobile.get_auto_region()<<" "<<automobile.get_auto_number();
    
    return 0;
}



