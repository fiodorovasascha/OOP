#include <iostream>
#include <string>
using namespace std;

class Complex {
private:
	double re;
	double im;
	double modul;

public:
	Complex(double r, double i) {
		re = r;
		im = i;
	}

	void module() {
		modul = sqrt(pow(re, 2) + pow(im, 2));
	}
	void display() {
		cout << "Действительная часть = " << re << endl;
		cout << "Мнимая часть = " << im << endl;
		cout << "Модуль компл. числа = " << modul << endl << endl;
	}
};

int main() {

	Complex c1(4, 3.0);
	Complex c2(1, 1);
	c1.module(); 
	c2.module();
	c1.display();
	c2.display();
	system("pause");
	return 0;
}