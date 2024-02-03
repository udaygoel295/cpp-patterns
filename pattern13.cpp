#include <bits/stdc++.h>
using namespace std;

void nStarTriangle(int n)
{
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << count << " ";
            count = count + 1;
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