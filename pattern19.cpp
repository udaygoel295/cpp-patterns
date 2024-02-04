#include <bits/stdc++.h>
using namespace std;

void nNumberTriangle(int n)
{
    int spaces = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++) // stars
        {
            cout << "*";
        }

        for (int j = 0; j < spaces; j++) // spaces
        {
            cout << " ";
        }

        for (int j = 0; j <= n - i; j++) // stars
        {
            cout << "*";
        }
        spaces += 2;
        cout << endl;
    }
    spaces = 8;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++) // stars
        {
            cout << "*";
        }

        for (int j = 0; j < spaces; j++) // spaces
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++) // stars
        {
            cout << "*";
        }
        spaces -= 2;
        cout << endl;
    }
}

int main()
{

    int n;
    cin >> n;
    nNumberTriangle(n);

    return 0;
}