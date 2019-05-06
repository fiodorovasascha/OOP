#include <iostream>
#include <string>
using namespace std;

class Alive {
protected:
	string population;
	string move_fast;
public:
	Alive(string p, string m) {
		population = p;
		move_fast = m;
	}
	virtual void zvuk() = 0;
};

class Bird : public Alive {
public:
	bool wings;
	Bird(string p, string m, bool w) : Alive(p, m) {
		wings = w;
	}

	void sound() {
		cout << "Chirik-Chirik" << endl;
	}

};

class Fish : public Alive {
public:
	bool plavniki;
	Fish(string p, string m, bool pl) : Alive(p, m) {
		plavniki = pl;
	}

	void sound() {
		cout << "..." << endl;
	}
};

class Animal : public Alive {
public:
	bool dikoe;
	Animal(string p, string m, bool d) : Alive(p, m) {
		dikoe = d;
	}
	void sound() {
		cout << "Rrrrraw!";
	}
};