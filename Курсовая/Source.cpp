#include "Headerrrr.h"

void Decoration::setCursorPosition(int x, int y)
{
	static const HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	std::cout.flush();
	COORD coord = { (SHORT)x, (SHORT)y };
	SetConsoleCursorPosition(hOut, coord);
}

void Decoration::SetColor(int text, ConsoleColor background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

void Decoration::x(int x, int y) {
	setCursorPosition(x, y);
	cout << "||";
}

void Decoration::hello() {
	SetColor(LightRed, Red);

	x(0, 0); x(2, 0); x(4, 0); x(8, 0); x(12, 0); x(16, 0); x(18, 0);
	x(19, 0);

	x(2, 1); x(9, 1), x(12, 1); x(16, 1); x(20, 1);
	x(2, 2); x(10, 2); x(12, 2); x(16, 2); x(18, 2);  x(19, 2);
	x(2, 3); x(12, 3); x(16, 3);
	x(2, 4); x(10, 4); x(11, 4); x(16, 4);
	//--------------------------------------------------------------------------------------------------
	x(1, 6); x(3, 6); x(8, 6); x(10, 6); x(12, 6); x(16, 6); x(18, 6); x(20, 6);
	x(24, 6); x(28, 6); x(33, 6); x(35, 6);  x(40, 6);
	x(42, 6); x(44, 6); x(48, 6);  x(50, 6);  x(51, 6);
	x(57, 6); x(59, 6);

	x(0, 7); x(4, 7); x(8, 7); x(16, 7), x(24, 7); x(28, 7);
	x(32, 7); x(36, 7); x(42, 7); x(48, 7); x(52, 7);
	x(56, 7); x(60, 7);

	x(0, 8); x(2, 8); x(4, 8); x(8, 8); x(16, 8); x(18, 8);
	x(24, 8); x(26, 8); x(28, 8); x(32, 8); x(42, 8);
	x(48, 8); x(50, 8); x(51, 8); x(56, 8); x(60, 8);

	x(0, 9); x(4, 9); x(8, 9); x(16, 9); x(24, 9);  x(28, 9);
	x(32, 9); x(36, 9); x(42, 9); x(48, 9); x(52, 9);
	x(56, 9); x(60, 9);

	x(0, 10); x(4, 10); x(8, 10); x(16, 10); x(18, 10); x(20, 10);
	x(24, 10);  x(28, 10); x(33, 10); x(35, 10); x(42, 10);
	x(48, 10); x(50, 10); x(51, 10); x(57, 10); x(59, 10);
	cout << endl << endl << endl;
	SetColor(White, Cyan);
}

void poisk(Vacation a[16], Vacation b[2]) {
	vector <Vacation> v1;
	vector <Vacation> v2;
	Vacation v = {};

	string s = "";
	cout << "Введите критерии поиска" << endl;
	cout << "Часть света(Европа, Азия): ";
	getline(cin, s);
	v.continent = s;
	cout << "Страна: Германия, Англия, Шолтандия, Финляндия, Швейцария, Норвегия, Италия, Греция, Испания - для Европы"<<endl;
	cout << "Бали, Шри-Ланка, Таиланд, Китай - для Азии"<<" "<<endl;
	getline(cin, s);
	v.country = s;
	cout << "Вид отдыха(Море, Экскурсия, Горнолыжный курорт): ";
	getline(cin, s);
	v.type = s;
	cout << "Количество звезд(2-5): ";
	getline(cin, s);
	v.number_of_stars = s;
	cout << "Плата в день (10-30$): ";
	getline(cin, s);
	v.payment = s;
	cout << "Количество дней (10/14): ";
	getline(cin, s);
	v.days = s;


	for (int i = 0; i < 16; i++) {
		if (a[i].Search_Criteria(v) >= 0.8) {
			v1.push_back(a[i]);
		}
	}

	int h = v1.size();
	for (int j = 0; j < h; j++) {
		int max = -1;
		int max_ind = -1;
		for (int i = 0; i < v1.size(); i++) {
			if (v1[i].Search_Criteria(v) > max) {
				max = v1[i].Search_Criteria(v);
				max_ind = i;
			}
		}
		v2.push_back(v1[max_ind]);
		v1.erase(v1.begin() + max_ind);
	}
	system("cls");

	cout << "Вы искали: " << endl;
	v.returnnn();
	cout << endl;
	cout << "Обратите внимание, сейчас есть горящие путевки. Поспешите, осталось мало мест!:" << endl;
	b[0].returnnn(); b[1].returnnn();

	if (v2.size() == 0) { cout << "Извините, по вашему запросу нет совпадений! Попробуйте начать заново"; }
	else {
		cout << "Мы нашли для Вас " << v2.size() << " направлений(-я)!" << endl << endl;
		for (int i = 0; i < v2.size(); i++) {
			v2[i].returnnn();
		}
	}
}

int Vacation::Skidka() {
	int sale = stoi(payment) * stoi(days) * 0.9;
	return sale;
}

void Vacation::returnnn() {
	cout << "Часть света: " << continent << ";";
	cout << " Страна: " << country << ";";
	cout << " Тип отдыха: " << type << ";";
	cout << " Количество звёзд: " << number_of_stars << ";";
	cout << " Плата/день: " << payment << "$" << ";";
	cout << " Количество дней: " << days << ";" << endl << endl;;
}

double Vacation::Search_Criteria(Vacation v) {
	int max = 0;
	double rate = 0;
	if (v.continent != "") max += 20;
	if (v.continent == continent) {
		rate += 20;
	}
	if (v.country != "") max += 10;
	if (v.country == country) {
		rate += 10;
	}
	if (v.type != "") max += 1;
	if (v.type == type) {
		rate++;
	}
	if (v.number_of_stars != "") max += 1;
	if (v.number_of_stars == number_of_stars) {
		rate++;
	}
	if (v.payment != "") max += 1;
	if (v.payment == payment) {
		rate++;
	}
	if (v.days != "") max += 1;
	else if (v.days == days) {
		rate++;
	}
	return rate / max;
}