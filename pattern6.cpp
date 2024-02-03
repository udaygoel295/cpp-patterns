#include <bits/stdc++.h>
using namespace std;

void nNumberTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << n - j + 1 << " ";
        }
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