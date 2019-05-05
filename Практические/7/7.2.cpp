
#include <iostream>
#include <cmath>
using namespace std;

class Figure {
protected:
	int diag_1;
	int diag_2;
	int ugol;
public:
	virtual void formula() = 0;
};

class Fourugolnik : public Figure {
public:
	virtual double find_s() = 0;
};

class Romb : public Fourugolnik {
public:
	Romb(int d1, int d2) {
		diag_1 = d1;
		diag_2 = d2;
	}
	double find_s() {
		return 0.5* (diag_1 * diag_2);
	}
	void formula() {
		cout << "0.5*(diag_1 * diag_2)" << endl;
	}
};

class Treugolnik : public Fourugolnik {
public:
	Treugolnik(int d, int a) {
		diag_1, diag_2 = d;
		ugol = a;
	}
	double find_s() {
		return 0.5* (diag_1 * diag_2 * sin(ugol));
	}
	void formula() {
		cout << "0.5*(diag^2)" << endl;
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
