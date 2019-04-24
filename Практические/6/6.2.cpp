/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

class Viraj {
public:
	virtual void display() = 0;
	virtual double result(double x) = 0;
	virtual void proizvodnoje() = 0;
	virtual Viraj* copy() = 0;
};

class Constanta : public Viraj {
public:
	void display() {
		cout << "f(x) = const" << endl;
	}
	double result(double x) {
		return 1;
	}
	void proizvodnoje() {
		cout << "f'(x) = 0" << endl;
	}
	Viraj* copy() {
		Viraj* vir = new Constanta;
		return vir;
	}
};

class Var : public Viraj {
public:
	void display() {
		cout << "f(x) = x" << endl;
	}
	double result(double x) {
		return x;
	}
	void proizvodnoje() {
		cout << "f'(x) = 1" << endl;
	}
	Viraj* copy() {
		Viraj* vir = new Var;
		return vir;
	}
};

class Summ : public Viraj {
public:
	void display() {
		cout << "f(x) = x+x" << endl;
	}
	double result(double x) {
		return x+x;
	}
	void proizvodnoje() {
		cout << "f'(x) = 2" << endl;
	}
	Viraj* copy() {
		Viraj* vir = new Summ;
		return vir;
	}
};

class Diff : public Viraj {
public:
	void display() {
		cout << "f(x) = x-(-x)-(-x)" << endl;
	}
	double result(double x) {
		return x - (-x) - (-x);
	}
	void proizvodnoje() {
		cout << "f'(x) = 3" << endl;
	}
	Viraj* copy() {
		Viraj* vir = new Diff;
		return vir;
	}
};

class Multi : public Viraj {
public:
	void display() {
		cout << "f(x) = x*(5*x-1)" << endl;
	}
	double result(double x) {
		return x * (5 * x - 1);
	}
	void proizvodnoje() {
		cout << "f'(x) = (5*x-1)+5*x" << endl;
	}
	Viraj* copy() {
		Viraj* vir = new Multi;
		return vir;
	}
};

class Division : public Viraj {
public:
	void display() {
		cout << "f(x) = (48*x^3)/(1 - x*x)" << endl;
	}
	double result(double x) {
		return (48 * x * x * x) / (1 - x * x);
	}
	void proizvodnoje() {
		cout << "f'(x) = (96*x^4 + 144*x^2(1-x^2)/(1-x^2)^2" << endl;
	}
	Viraj* copy() {
		Viraj* vir = new Division;
		return vir;
	}
};

class Sin : public Viraj {
public:
	void display() {
		cout << "f(x) = sin(x)" << endl;
	}
	double result(double x) {
		return sin(x);
	}
	void proizvodnoje() {
		cout << "f'(x) = cos(x)" << endl;
	}
	Viraj* copy() {
		Viraj* vir = new Sin;
		return vir;
	}
};

class Cos : public Viraj {
public:
	void display() {
		cout << "f(x) = cos(x)" << endl;
	}
	double result(double x) {
		return cos(x);
	}
	void proizvodnoje() {
		cout << "f'(x) = -sin(x)" << endl;
	}
    Viraj* copy() {
		Viraj* vir = new Cos;
		return vir;
	}
};

class Exp : public Viraj {
public:
	void display() {
		cout << "f(x) = exp(x)" << endl;
	}
	double result(double x) {
		return exp(x);
	}
	void proizvodnoje() {
		cout << "f(x) = exp(x)" << endl;
	}
	Viraj* copy() {
		Viraj* vir = new Exp;
		return vir;
	}
};
class Ln : public Viraj {
public:
	void display() {
		cout << "f(x) = ln(x)" << endl;
	}
	double result(double x) {
		return log(x);
	}
	void proizvodnoje() {
		cout << "f(x) = 1/x" << endl;
	}
	Viraj* copy() {
		Viraj* vir = new Ln;
		return vir;
	}
};


