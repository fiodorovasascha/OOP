/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;
 
void vibor(int*a, int size) { 
	int l = 0;      
	int index_min = 0; 
	while (true) {
		int min = 1000;
		for (int i = l; i < size; i++) {
			if (a[i] < min) {
				min = a[i];
				index_min = i;
			}	
		}
		swap(a[l], a[index_min]);
		l++;   
		if (l == size) break;
	}
}

void vibor(double*a, int size) {
	int l = 0;      
	int index_min = 0; 
	while (true) {
		double min = 1000;
		for (int i = l; i < size; i++) {
			if (a[i] < min) {
				min = a[i];
				index_min = i;
			}
		}
		swap(a[l], a[index_min]);
		l++;   
		if (l == size) break;
	}
}

int main(int argc, char* argv[])
{
	int a [10] = { 1, 10, 2, 8, 4, 7, 6, 3, 9, 5 };
	double b[10] = { 8, 7.03, 1.24, 5.68, 7, 6, 9.11, 0.99, 10, 2};

	vibor(a, 10);
	vibor(b, 10);

	for (int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << endl;
	for (int i = 0; i < 10; i++) cout << b[i] << " ";
	cout << endl;

	system("pause");
	return 0;
}