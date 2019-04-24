/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <ctime>
using namespace std;

int * swapppp(int * a, int length) {             
	for (int i = 0; i < length - 1; i = i + 2) {
		int  temporary = a[i];
		a[i] = a[i + 1];
		a[i + 1] = temporary;
	}
	return a;
}

void vivod_a(int *a) {              
	for (int i = 0; i < 12; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

int main(int argc, char* argv[])
{
	srand(time(0));
	int *a = new int[12];
	for (int i = 0; i < 12; i++) {
		a[i] = rand() % 12 + 1;
	}

	vivod_a(a);
	a = swapppp(a, 12);
	vivod_a(a);
	system("pause");
	return 0;
}