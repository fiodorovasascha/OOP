#include <stdio.h>
#include <iostream>
using namespace std;

class Students{
    public:
    void set_name(string student_name)
        {
            name = student_name;
        }
        string get_name()
        {
            return name;
        }
        void set_last_name(string student_last_name)
        {
            last_name = student_last_name;
        }
        string get_last_name()
        {
            return last_name;
        }
        void set_attendance (int student_attendance[])
        {
        for (int i = 0; i < 6; ++i) {
                attendance[i] = student_attendance[i];
            }
        }
        void set_number_of_passes(int pass)
        {
            number_of_passes = pass;
        }
        int get_number_of_passes()
        {
            return number_of_passes;
        }
    private:
        int attendance[6];
        int number_of_passes;
        string name;
        string last_name;
        
}
;

int main()
{
    Students student;
    cout<<"There is a six-day week at our university."<<endl;
    cout<<"Usually students have 6 classes per day."<<endl;
    
    string name, last_name;
    cout<<"Please enter your name and last name: "<<endl;
    cin>>name>>last_name;
    
    student.set_name(name);
    student.set_last_name(last_name);
    
    int attendance[6];
    int sum = 0;
    int c = 0;
    
    for(int i = 0; i<6; i++){
        c++;
        cout<<"Enter the number of attendance at day "<<c<<": ";
        cin>>attendance[i];
        sum += attendance[i];
    }
    
    student.set_attendance(attendance);
    
    int number_of_passes = 36 - sum;
    student.set_number_of_passes (number_of_passes);
    
    cout<<student.get_name()<<student.get_last_name()<<"`s number of passes is "<<student.get_number_of_passes()<<endl;
    
    
    return 0;
}


