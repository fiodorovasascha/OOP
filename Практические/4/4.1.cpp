/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
//#include <windows.h> 
#include <iostream>
#include <ctime>
using namespace std;

double * memory( int *size) {              
	cout << "Введите размер массива: ";
	cin >> *size;
	double *a = new double[*size];
	system("CLS");						  
	cout << "Массив размера: " << *size << " был создан" << endl << endl;
	return a;
}

double * zap(double *a, int size, bool zapolnenie) {	
	if (zapolnenie) {
		for (int i = 0; i < size; i++) {
			cout << "a[" << i << "]= ";
			cin >> a[i];
		}
		system("CLS");
	}
	else {
		for (int i = 0; i < size; i++) {
			a[i] = double(rand() % 127) / 1.9;
		}
		system("CLS");
		
	}
	return a;
}

void vivod_a(double *a, int size) {    
	for (int i = 0; i < size; i++) {
		cout << "a[" << i << "]= " << a[i] << endl;
	}
}

void delete_a(double *a, int *size) {  
	if (*size == 0) {
		cout << "Массив пустой, создайте его заново." << endl << endl;
	}
	else {
		delete[] a;
		a = NULL;
		*size = 0;
		cout << "Массив удален." << endl << endl;
	}
}

void menu() {        
	cout << "Введите: " << endl;
	cout << "	1 для создания массива;" << endl;
	cout <<	"	2 для заполнения массива;" << endl;
	cout << "	3 для вывода на экран массива;" << endl;
	cout << "	4 для удаления массива;" << endl;
	cout << "	5 для выхода из программы;" << endl;
	cout << "Ваше решение?  ";
}

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	cout << "Следуйте инструкциям для работы с массивом." << endl << endl;
	int size = 0;
	double *a = 0;
	bool cycle_exit = false;  
	bool empty = true; 
	bool zapolnenie = false;
	
	while (true) {
		menu();
		int answer;
		cin >> answer;
		switch (answer) {
			case 1: 
				system("CLS");
				if (size != 0) {
					cout<< "Необходимо удалить старый массив перед созданием нового." << endl << endl;
				}
				else a = memory(&size);
				break;
			case 2: 
				system("CLS");
				if (size == 0) {										
					cout << "Ошибка. Вы не создали массив." << endl << endl;
					break;
				}
				else {
					cout << "Заполнить самому/автоматически? " << endl;
					cout<<"Введите 1 или 0 для первого и второго случаев соответственно: "<<endl;
					cin >> zapolnenie;
					a = zap(a, size, zapolnenie);
				}
				empty = false;
				break;
			case 3:
				system("CLS");
				if (size == 0) {
					cout << "Ошибка. Вы не создали массив." << endl << endl;
					break;
				}
				else if (empty) {
					cout << "Нет данных, массив пуст." << endl << endl;
				}
				else vivod_a(a, size);
				break;
			case 4:
				system("CLS");
				delete_a(a, &size);
				break;
			case 5:
				system("CLS");
				cout << "Программа завершила свою работу. До свидания!" << endl;
				cycle_exit = true;
				break;
		}
		if (cycle_exit == 1) break;
	}
	system("pause");
	return 0;
}
