#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;

	switch (x)
	{
	case 1: if (y == 1) { cout << "1" << endl; break; }
	case 0: cout << "0" << endl; break;
	default: cout << "Input Error" << endl; 
	}
	return 0;
}