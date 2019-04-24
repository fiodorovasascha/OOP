
#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

class Vectors{
    public:
    void set_x_coordinate(int x_coordinate){
        x_coordinate = x;
    }
    int get_x_coordinate(int x){
        return x;
    }
    
    void set_y_coordinate(int y_coordinate){
        y_coordinate = y;
    }
    int get_y_coordinate(int y){
        return y;
    }
    
    void set_vectors_dlina( double vectors_dlina){
        dlina = vectors_dlina;
    }
    double get_vectors_dlina()
    {
        return dlina;
    }
    
    
    
    private:
    int x;
    int y;
    double dlina;
}
;
int main()
{
    Vectors vector;
    int x, y;
    double dlina;
    
    cout<<"Please enter vector`s coordinates in centimetres "<<endl;
    cout<<"x= ";
    cin>>x;
    cout<<"y= ";
    cin>>y;
    
    vector.set_x_coordinate(x);
    vector.set_y_coordinate(y);
    
    dlina = sqrt(x*x + y*y);
    vector.set_vectors_dlina(dlina);
    
    cout<<"The vector`s length is "<<vector.get_vectors_dlina()<<" square centimeter";
    
    
    
    
    
    
    return 0;
}

