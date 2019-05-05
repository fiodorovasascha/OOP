// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
	string name;
	int age;
public:
	void set_name(string s) {
		name = s;
	}
	void set_age(int a) {
		age = a;
	}
	virtual void speach() = 0;
};

class Cat : Animal {
	string color;
public:
	void set_color(string c) {
		color = c;
	}
	void speach() {
		cout << "Mrrr";
	}
};

class Dog : Animal {
public:
	void speach() {
		cout << "Gav!!";
	}
};

class Parrot : Animal {
	string color;
public:
	Parrot(int a, string c) {
		color = c;
		age = a;
	}
	void speach() {
		cout << "Chirik-chirik!";
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
