#include <stdio.h>
#include <iostream>
using namespace std;

class Books{
    public:
        void set_author_name(string author_name)
        {
            name = author_name;
        }
        string get_name()
        {
            return name;
        }
        void set_author_last_name(string author_last_name)
        {
            last_name = author_last_name;
        }
        string get_last_name(){
            return last_name;
        }
        void set_books_title(string books_title)
        {
            title = books_title;
        }
        string get_books_title()
        {
            return title;
        }
        void set_number_of_pages (int number_of_pages)
        {
            number = number_of_pages;
        }
        int get_number_of_passes(int number)
        {
            return number;
        }
        void set_books_price(double books_price){
            price = books_price;
        }
        double get_books_price(){
            return price;
        }
        
    private:
    string name;
    string last_name;
    string title;
    int number;
    double price;
}
;

int main()
{
    Books book;
    cout<<"The book`s price is calculated in the following way: "<<endl;
    cout<<"Each page costs 0.3$ and the cover costs 5$."<<endl;
    
    string name,last_name, title;
    cout<<"Please enter author`s fist, last names and the book`s title: "<<endl;
    cin>>name>>last_name>>title;
    
    book.set_author_name(name);
    book.set_books_title(title);
    book.set_author_last_name(last_name);
    
    int number;
    
    cout<<"Enter the number of pages in the "<<title<<" by "<<name<<" "<<last_name<<" ";
    cin>>number;
    
    book.set_number_of_pages(number);
    
    double price = (0.3*number + 5);
    book.set_books_price (price);
    
    cout<<book.get_books_title()<<" by "<<book.get_name()<<" "<<book.get_last_name()<<" costs "<<book.get_books_price()<<"$"<<endl;
    
    return 0;
}


