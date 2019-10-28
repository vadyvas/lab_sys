#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a = 2.1,
		s = 0;

	for (int i = 1; i < 5; i++)
	{
		s += pow(a*i + 2, 2);

	}

	cout << "s:\t" << s << endl;

	return 0;
}
