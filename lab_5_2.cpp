#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	const int m = 3,
			n = 5;

	int s = 0;

	int ari[m][n] = { {1,2,3,4,5},
					{6,7,8,9,10 },
					{11,12,13,14,15}};

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			s += ari[i][j];

	cout << "S:\t" <<s<< endl;
	return 0;
}