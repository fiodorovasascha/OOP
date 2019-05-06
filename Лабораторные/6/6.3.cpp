#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
	bool homi;
	int age;
	int weight;
public:
	Animal(bool h, int a, int w) {
		homi = h;
		age = a;
		weight = w;
	}
	virtual void sound() = 0;
};

class Dog : public Animal {
public:
	string color;
	Dog(bool h, int a, int w, string c) : Animal(h, a, w) {
		color = c;
	}

	void sound() {
		cout << "Gaw" << endl;
	}
};

class Cat : public Animal {
public:
	bool tolstiak;
	Cat(bool h, int a, int w, string c, bool t) : Animal(h, a, w) {
		tolstiak = t;
	}

	void sound() {
		cout << "Mur" << endl;
	}
};