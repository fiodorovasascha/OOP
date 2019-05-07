// ConsoleApplication13.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
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

		friend istream& operator>>(istream& in, const Complex& number) {
			in >> number.re >> number.im;
			return in;
		}

		double module() {
			return sqrt(pow(re, 2) + pow(im, 2));
		}

		void display() {
			cout << "Действительная часть = " << re << endl;
			cout << "Мнимая часть = " << im << endl;
			cout << "Модуль компл. числа = " << this->module() << endl << endl; //ссылка на данный объект
		}
	};

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
