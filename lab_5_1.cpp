#include <iostream>

using namespace std;

int main()
{
  int A[3][3]={1,2,3,
              4,15,6,
              7,8,9};

    int maxi = 0, maxj = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0 ; j< 3; j++)
        {
            if (A[i][j] > A[maxi][maxj])
            {
              maxi = i;
              maxj = j;
            }
        }
    }

    int ar[3];
    for (int i = 0 ; i < 3; i++)
        ar[i] = A[i][maxj];

    for (int i = 0; i < 3; i++)
        cout << ar[i] << endl;

    return 0;
}

