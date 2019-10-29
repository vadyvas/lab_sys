#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int k = 0,
		b,
		s = 0,	//sum
		d = 0;	//positive
	cin >> b;
	int ari[5] = { 1, 2, 3, 4, 0 };

	for (int i = 0; i < 5; i++)
	{
		if (ari[i] != 0)
			k++;
		if (b > 0)
		{
			if (ari[i] > 0)
				d++;
		}
		else if (ari[i] % 2 != 0)
			s += ari[i];
	}
	cout << "Not 0:\t" << k << endl;
	b > 0 ? cout << "Positiv elem:\t" << d : cout << "Sum:\t" << s;
	cout << endl;
	return 0;
}
