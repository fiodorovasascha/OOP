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
		cout << "Имя ребенка: " << fistname << endl;
		cout << "Фамилия ребенка: " << lastName << endl;
		cout << "Возраст ребенка: " << age << endl;
		cout << endl << endl;;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	Child Jack;
	Child Michael;

	Jack.set_name("Jack");
	Jack.set_surName("Smith");
	Jack.set_age(19);

	Michael.set_name("Michael");
	Michael.set_surName("Jackson");
	Michael.set_age(5);

	John.display();
	Alex.display();

	system("pause");
	return 0;
}
