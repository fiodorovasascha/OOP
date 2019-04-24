/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;

void bubble(int *a, int size) {  
	while (true) {
		bool completed = true;
		for (int i = 0; i < size - 1; i++) {
			if (a[i] > a[i + 1]) {
				swap(a[i], a[i + 1]);
				completed = false;
			}
		}
		if (completed) break;
	}
}

void bubble(double *a, int size){ 
	while (true) {
		bool completed = true;
		for (int i = 0; i < size - 1; i++) {
			if (a[i] > a[i + 1]) {
				swap(a[i], a[i + 1]);
				completed = false;
			}
		}
		if (completed) break;
	}
}

int main(int argc, char* argv[])
{
	int a_int[10] = { 8, 2, 4, 5, 10, 1, 3, 7, 6, 9};
	double a_double[10] = { 10, 4.0, 5.4 , 1.8, 2.7, 9, 8, 3, 5.343, 7.5 };
	bubble(a_int, 10);
	bubble(a_double, 10);
	for (int i = 0; i < 10; i++) {
		cout << a_int[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 10; i++) {
		cout << a_double[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}