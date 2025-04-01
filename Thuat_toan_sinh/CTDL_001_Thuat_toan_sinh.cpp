#include <bits/stdc++.h>

using namespace std;

int n, final = 0;
int a[100];

void init()
{
    for (int i = 1; i <= n; i++)
        a[i] = 0;
}

void sinh()
{
    if (n % 2 == 0)
    {
        int i = n / 2;
        while (i >= 0 && a[i] == 1)
        {
            a[i] = 0;
            i--;
        }
        if (i == 0)
            final = 1;
        else
            a[i] = 1;
        for (int j = n; j > n / 2; j--)
        {
            a[j] = a[n - j + 1];
        }
    }
    else
    {
        int i = n / 2 + 1;
        while (i >= 1 && a[i] == 1)
        {
            a[i] = 0;
            i--;
        }
        if (i == 0)
            final = 1;
        else
            a[i] = 1;

        for (int j = n; j > n / 2 + 1; j--)
        {
            a[j] = a[n - j + 1];
        }
    }
}

int main()
{
    cin >> n;
    init();
    while (final == 0)
    {
        for (int i = 1; i <= n; i++)
            cout << a[i] << " ";
        cout << endl;
        sinh();
    }
}
