#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <windows.h> 
#include <fstream>
#include <cmath>
using namespace std;

class Complex {
public:
	double Rez;
	double Imz;
};

Complex summ(Complex a, Complex b); 
Complex diff(Complex a, Complex b); 
Complex multy(Complex a, Complex b);
Complex divis(Complex a, Complex b); 
double abs_value(Complex a);	   
void user();			 
#endif