// ConsoleApplication9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int* reverse(int* a, int length) {
	for (int i = 0; i < length / 2; i++) {
		swap(a[i], a[length - 1 - i]);
	}
	return a;
}

int* vozrost(int* a, int length) {
	for (int i = 0; i < length; i++) {
		for (int j = i + 1; j < length; j++) {
			if (a[i] > a[j]) {
				swap(a[i], a[j]);
			}
		}
	}
	return a;
}
int* ubiv(int* a, int length) {
	for (int i = 0; i < length; i++) {
		for (int j = i + 1; j < length; j++) {
			if (a[i] < a[j]) {
				swap(a[i], a[j]);
			}
		}
	}
	return a;
}
int* (*universal(int* a, int length))(int*, int) {
	int sum = 0;
	for (int i = 1; i < length; i++) {
		sum += a[i];
	}
	if (sum == a[0]) {
		return reverse;
	}
	else if (sum > a[0]) {
		return vozrost;
	}
	else {
		return ubiv;
	}
}

int main(int argc, char const* argv[])
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	int* (*func)(int*, int);
	int size = 0;
	cout << "Введите размер массива: ";
	cin >> size;
	int* array = new int[size];
	cout << endl;
	for (int i = 0; i < size; i++) {
		array[i] = rand() % 44;
		cout << array[i] << ' ';
	}
	cout << endl << endl;;
	func = universal(array, size);
	array = func(array, size);
	for (int i = 0; i < size; i++) {
		cout << array[i] << ' ';
	}
	cout << endl << endl;;
	delete[] array;
	func = NULL;
	system("pause");
	return 0;
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
