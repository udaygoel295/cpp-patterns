#include <bits/stdc++.h>
using namespace std;

void nStarTriangle(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (char ch = 'A'; ch < 'A' + i; ch++)
        {
            cout << ch << " ";
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