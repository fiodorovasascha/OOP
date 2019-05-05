// ConsoleApplication6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
using namespace std;

class Transport {
protected:
	int	count_of_passengers;
	int price;
public:
	virtual void earning() = 0;
};

class Automobile : public Transport 
	{
	bool taxi;
public:
	Automobile(bool a, int b) {
		taxi = a;
		count_of_passengers = b;
	}
	void earning() {
		if (taxi) { price = 100; }
		else { price = 0; }
		cout << count_of_passengers * price << endl;
	}
};

class Bus : public Transport {
public:
	Bus(int a, int b) {
		price = a;
		count_of_passengers = b;
	}
	void earning() {
		cout << count_of_passengers * price << endl;
	}
};

class Bicycle : public Transport {
	bool trunk;
public:
	Bicycle(bool a) {
		trunk = a;
	}
	void earning() {
		if (trunk) {
			cout << "2 passengers" << endl;
		}
		else {
			cout << "1 passenger";
		}
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
