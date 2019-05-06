#include <iostream>
#include <string>
using namespace std;

class Human {
protected:
	string lastname;
	string firstname;
	int age;
public:
	Human() {}
	Human(string lastname, string firstname, int age) {
		this->lastname = lastname; //this - указатель на данный объект
		this->firstname = firstname;
		this->midname = midname;
		this->age = age;
	}
	virtual void print() = 0;

	virtual ~Human();
};

class Student : public Human {
private:
	bool has_hvosti;
public:
	Student() : Human() {
		has_hvosti = true;
	}

	Student(string lastname, string firstname, int age, bool has_hvosti) : Human(lastname, firstname,  age) {
		this->has_hvosti = has_hvosti;
	}

	void print() {
		cout << "Lastname:  " << lastname << endl << "Name : " << firstname << endl
			<< "Age : " << age << endl << "Has any arrearages? " << has_hvosti << endl;
	}
	~Student();
};


class Boss : public Human {
private:
	int top_of_company;
protected:
	Boss() : Human() {
		top_of_company = 0;
	}

	Boss(string lastname, string firstname, int age, int top_of_company) : Human(lastname, firstname, age) {
		this->top_of_company = top_of_company;
	}

	void print() {
		cout << "Lastname:  " << lastname << endl << "Name : " << firstname << endl <<endl
			<< "Age : " << age << "The plase of the company in the TOP-10 list:  " << top_of_company << endl;
	}
	~Boss();
};