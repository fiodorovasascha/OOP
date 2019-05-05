#include <iostream>
#include <string>
using namespace std;

class Tiles {
public:
	Tiles() {};
	string brand;
	int size_h;
	int size_w;
	int price;
	Tiles(string b, int h, int w, int p) {
		brand = b;
		size_h = h;
		size_w = w;
		price = p;
	}

	void getData() {
		cout << "Brand: " << brand << endl;
		cout << "Height: " << size_h << endl;
		cout << "Width: " << size_w << endl;
		cout << "Price: " << price << endl;
		cout << endl << endl;
	};

};

int main() {
	Tiles tile1 = Tiles("Seliger", 120, 300, 10000800);
	Tiles tile2 = Tiles("Berezki", 175, 400, 10000);

	tile1.getData();
	tile2.getData();
	system("pause");
	return 0;
}