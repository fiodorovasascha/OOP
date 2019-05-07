// ConsoleApplication11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <list>
using namespace std;

class Complex {
private:
	double re;
	double im;
public:
	Complex(double r, double i) {
		re = r;
		im = i;
	}

	Complex& operator= (Complex& value) {
		this->im = value.im;
		this->re = value.re;
		return *this;
	}

	Complex& operator++ () {
		this->re += 1;
		this->im += 1;
		return *this;
	}

	Complex& operator-- () {
		this->re -= 1;
		this->im -= 1;
		return *this;
	}

	friend bool operator== (const Complex& left, const Complex& right) {
		bool is_real = left.re == right.re;
		bool is_image = left.im == right.im;
		return is_real && is_image;
	}

	friend ostream& operator<<(ostream& out, const Complex& value) {
		out << "Компл. число = " << value.re << " + i * " << value.im << endl;
		return out;
	}


	double module() {
		return sqrt(pow(re, 2) + pow(im, 2));
	}

	void display() {
		cout << "Действительная часть = " << re << endl;
		cout << "Мнимая часть = " << im << endl;
		cout << "Модуль к. ч. = " << this->module() << endl << endl; //ссылка на данный объект
	}
};



int main()
{
	setlocale(LC_ALL, "Russian");
	list<Complex> com;
	int n;
	cout << "Количество чисел: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		double re, im;
		cout << "Введите действительную и мнимую части числа: ";
		cin >> re >> im;
		Complex complex(re, im);
		com.push_back(complex);
	}
	system("pause");
	return 0;
}