#include <bits/stdc++.h>
using namespace std;

void nSquare(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)  //printing stars at borders
        {

            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
                cout << "*";

            else                    //spaces
                cout << " ";
        }
        cout << endl;
    }
}

int main()
{

    int n;
    cin >> n;
    nSquare(n);

    return 0;
}