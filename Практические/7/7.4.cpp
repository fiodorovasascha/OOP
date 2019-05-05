// ConsoleApplication6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <string>
using namespace std;

class Screen {
protected:
	int ramka;
	int razreshenije;
public:
	virtual void dreams() = 0;
};

class Keyboard {
protected:
	string language;
public:
	virtual void night() = 0;
};

class Notebook : public Screen, public Keyboard {
public:
	Notebook(string l, int a) {
		language = l;
		ramka = a;
	}
	void night() {
		cout << "Notebook is compact and productive";
	}
};

class Phone : public Screen, public Keyboard {
	bool existance;
public:
	Phone(bool existance, string l, int a) {
		if (existance) {
			language = l;
		}
		else { language = "There`s only touchpad."; }
		ramka = a;
	}
	void night() {
		cout << "Mom, go away, I`m looking for memes.";
	}
};

class PC : public Screen, public Keyboard {
public:
	PC(string l, int a) {
		language = l;
		ramka = a;
	}
	void dreams() {
		cout << "PC is massive but more productive than nitebook.";
	}
	void night() {
		cout << "I`m an adult now and can look for memes all night long!;)";
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
