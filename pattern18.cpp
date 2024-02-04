#include <bits/stdc++.h>
using namespace std;

void nStarTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = ('A' + n - 1); ch >= ('A' + n - i - 1); ch--)
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