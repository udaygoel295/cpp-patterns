#include <bits/stdc++.h>
using namespace std;

void nStarTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - i - 1; j++) // space
        {
            cout << " ";
        }

        for (int j = 0; j < 2 * i + 1; j++) // star
        {
            cout << "*";
        }

        for (int j = 0; j < n - i - 1; j++) // space
        {
            cout << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < i; j++) // space
        {
            cout << " ";
        }

        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }

        for (int j = 0; j < i; j++) // space
        {
            cout << " ";
        }

        cout << endl;
    }
}

int main()
{

    int n;
    cin >> n;
    nStarTriangle(n);

    return 0;
}