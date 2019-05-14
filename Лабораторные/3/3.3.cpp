#include <iostream>
#include <cmath>
using namespace std;

class Complex {
private:
	double re;
	double im;
	double modul;

public:
	void set_re(double real) {
		re = real;
	}
	void set_im(double image) {
		im = image;
	}
	void module() {
		modul = sqrt(pow(re, 2) + pow(im, 2));
	}
	void gettt() {
		cout << "Действчительная часть = " << re << endl;
		cout << "Мнимая часть = " << im << endl;
		cout << "Модуль компл. числа = " << modul << endl << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	Complex q1, q2;

	q1.set_re(4);
	q1.set_im(3.0);
	q1.module();
	q1.gettt();

	q2.set_re(0.0);
	q2.set_im(2.0);
	q2.module();
	q2.gettt();
	system("pause");
	return 0;
}
