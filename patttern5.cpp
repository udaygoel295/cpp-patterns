#include <bits/stdc++.h>
using namespace std;

void seeding(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{

    int n;
    cin >> n;
    seeding(n);

    return 0;
}