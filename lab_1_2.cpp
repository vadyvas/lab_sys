#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a = 0.12,
		b = 0.11,
		x = 0.08;

	double y = log(asin(a*x*x)) + pow(tan(b * x) , 1.0 / 3.0) + exp(3.7);

	cout << "y:" << y << endl;

	return 0;
}

