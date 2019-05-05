#include <iostream>
#include <string>
using namespace std;

class Tiles {
public:
	string brand;
	int size_h;
	int size_w;
	int price;
	void getData() {
		cout << "Brand: " << brand << endl;
		cout << "Height: " << size_h << endl;
		cout << "Width: " << size_w << endl;
		cout << "Price: " << price << endl;
		cout << endl << endl;
	};

};
int main()
{
	Tiles tile1, tile2;

	tile1.brand = "Seliger";
	tile1.size_h = 120;
	tile1.size_w = 300;
	tile1.price = 1000800;

	tile2.brand = "Berezki";
	tile2.size_h = 175;
	tile2.size_w = 400;
	tile2.price = 10000;

	tile1.getData();
	tile2.getData();

	system("pause");
	return 0;
}
