#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int k = 0;
	int ari[5] = { 1, 2, 3, 4, 0 };

	for (int i = 0; i < 5; i++)
		if (ari[i] != 0)
			k++;

	cout << k << endl;

	return 0;
}
