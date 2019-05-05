#include <iostream>
#include <string>
using namespace std;

class Child {
private:
	string firstname;
	string lastName;
	int age;
public:
	Child(string n, string lN, int a) {
		firstname = n;
		lastName = lN;
		age = a;
	}

	void display() {
		cout << "Имя ребенка: " << firstname << endl;
		cout << "Фамилия ребенка: " << lastName << endl;
		cout << "Возраст ребенка: " << age << endl;
		cout << endl << endl;;
	}
};

int main() {
	Child Jack("Jack", "Smith", 19);
	Child Michael("Michael", "Jackson", 5);

	Jack.display();
	Michael.display();
	system("pause");
	return 0;
}