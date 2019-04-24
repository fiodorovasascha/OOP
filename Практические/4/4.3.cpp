/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <ctime>
#include <iostream>
using namespace std;

int **sozdaem(int **a, int m, int n) { 
	for (int i = m; i > 0; i--) {
		a[i] = new int[n];
		for (int j = n; j > 0; j--) {
			a[i][j] = rand() % 41 + 10;
		}
	}
	return a;
}

int **vivod(int **a, int m, int n) { //вывод двумерного массива на экран
	for (int i = m; i > 0; i--) {
		for (int j = n; j > 0; j--) {
			cout << a[i][j]<<" ";
		}
		cout << endl;
	}
	return a;
}

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int str;
	int stlb;
	
	cout << "Введите количество строк, затем столбцов двумерного массива: ";
	cin >> str >> stlb;
	int ** a = new int*[str];
	a = sozdaem(a, str, stlb);
	a = vivod(a, str, stlb);

	system("pause");
	return 0;
}

