#include <bits/stdc++.h>
using namespace std;

void nStarTriangle(int n)
{
    int spaces = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++) // value
        {
            cout << j << " ";
        }

        for (int j = 1; j <= spaces; j++) // spaces
        {
            cout << " ";
        }

        for (int j = i; j >= 1; j--) // value
        {
            cout << j << " ";
        }
        cout << endl;
        spaces -= 2;
    }
}

int main()
{

    int n;
    cin >> n;
    nStarTriangle(n);

    return 0;
}