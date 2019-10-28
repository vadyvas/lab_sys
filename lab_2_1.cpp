#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	const double c = 1.231,
		d = 1.152;
	double x = 2.936,
		y = 2.936,
		a;

	if (x < y)
		a = exp(x * y) + d * log(x);
	else a = pow(x + c, 1.0 / 3.0) + log(y);

	cout << "a:\t" << a << endl;

	return 0;
}
