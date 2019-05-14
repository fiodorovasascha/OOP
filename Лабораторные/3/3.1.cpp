#include <iostream>
#include <string>
using namespace std;

class Child {
private:
	string firstname;
	string lastName;
	int age;
public:
	void set_fistname(string n) {
		firstname = n;
	}
	void set_lastName(string lN) {
		lastName = lN;
	}
	void set_age(int a) {
		age = a;
	}
	void display() {
		cout << "Имя ребенка: " << firstname << endl;
		cout << "Фамилия ребенка: " << lastName << endl;
		cout << "Возраст ребенка: " << age << endl;
		cout << endl << endl;;
	}
};

int main()
{
	Child Jack;
	Child Michael;

	Jack.set_fistname("Jack");
	Jack.set_lastName("Smith");
	Jack.set_age(19);

	Michael.set_fistname("Michael");
	Michael.set_lastName("Jackson");
	Michael.set_age(5);

	Jack.display();
	Michael.display();

	system("pause");
	return 0;
}