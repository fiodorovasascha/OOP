#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	string stop;
	cout << "Введите слово для остановки ввода: ";
	cin >> stop;

	ofstream file("file.txt", ios_base::trunc); 
	char origin_string[100];					
	while (true) {								
		cin.getline(origin_string, 100);
		if (origin_string == stop) break;
		file << origin_string << endl;
		memset(origin_string, 0, 100);
	}
	file.close();
	system("pause");
	return 0;
}