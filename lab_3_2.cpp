#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float x = 0.0,
		y;
	/*while (x < 1)
	{
		y = 2 * x + tan(x) + exp(x) - log(2 + x);
		cout << y << endl;
		x += 0.1;
	}*/
	do
	{
		y = 2 * x + tan(x) + exp(x) - log(2 + x);
		cout << y << endl;
		x += 0.1;
	} while (x < 1);



	return 0;
}
