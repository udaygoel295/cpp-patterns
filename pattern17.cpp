#include <bits/stdc++.h>
using namespace std;

void nStarTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - i - 1; j++) // spaces
        {
            cout << " ";
        }

        for (char ch = 'A'; ch <= 'A' + i; ch++) // alphabets
        {
            cout << ch << " ";
        }

        for (char ch = 'A' + i - 1; ch >= 'A'; ch--) // alphabets
        {
            cout << ch << " ";
        }

        for (int j = 0; j < n - i - 1; j++) // spaces
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