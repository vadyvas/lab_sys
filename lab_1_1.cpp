// lab_1_1.cpp : 1 лабораторна 1 завдання

#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double c = 2.34,
		k = 2.57;

	double d = exp(c) + ((4 - sin(c * k)) / pow(sin(k), 2));
	double l = pow(k, 2) / pow(4 + k, 2) + c;


	cout << "d:\t" << d << endl;
	cout << "l:\t" << l << endl;

	return 0;
}
