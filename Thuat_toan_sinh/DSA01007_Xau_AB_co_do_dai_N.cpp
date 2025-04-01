#include <bits/stdc++.h>
using namespace std;

int n;
int final = 0;
int a[10000];

void init();
void sinh_AB();

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        final = 0;
        cin >> n;
        init();
        while (!final)
        {
            for (int i = 1; i <= n; i++)
            {
                if (a[i] == 0)
                {
                    cout << 'A';
                }
                else
                    cout << 'B';
            }
            cout << ' ';
            sinh_AB();
        }
        cout << endl;
    }
    return 0;
}

void init()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = 0;
    }
}

void sinh_AB()
{
    int i = n;
    while (i > 0 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }

    if (i == 0)
    {
        final = 1;
    }
    else
    {
        a[i] = 1;
    }
}