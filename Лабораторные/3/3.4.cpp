#include <iostream>
using namespace std;

class Vector {
private:
	double x, y;
public:
	void set(double a, double b) {
		x = a;
		y = b;
	}
	double get_module() {
		double module = sqrt(pow(x, 2) + pow(y, 2));
		return module;
	}

	void sum(Vector v) {
		x += v.x;
		y += v.y;
	}

	void diff(Vector v) {
		x -= v.x;
		y -= v.y;
	}
	void gettt() {
		cout << x << " " << y << endl;
	}
};
int main()
{
	Vector q1, q2;
	q1.set(3, 5);
	q1.gettt();
	cout << "q1`s module = " << q1.get_module() << endl << endl;

	q2.set(-1, 1);
	q2.sum(q1);
	q2.diff(q1);
	q2.gettt();
	cout << "q2`s module = " << q2.get_module() << endl << endl;
	system("pause");
	return 0;
}

