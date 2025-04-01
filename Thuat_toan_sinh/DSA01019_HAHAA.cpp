#include <bits/stdc++.h>

using namespace std;

int n;
int a[100000];
int final = 0;

void init();
void sinh_HAHA();
bool check();

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
            if (check())
            {
                for (int i = 1; i <= n; i++)
                {
                    if (a[i] == 1)
                        cout << "H";
                    else
                        cout << "A";
                }
                cout << endl;
            }
            sinh_HAHA();
        }
        }
}

void init()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = 0;
    }
}

void sinh_HAHA()
{
    int i = n;

    while (i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }
    if (i == 0)
    {
        final = 1;
    }
    else
        a[i] = 1;
}

bool check()
{
    for (int i = 1; i <= n; i++)
    {
        if ((a[1] != 1) || ((a[i] == 1) && (a[i] == a[i + 1])) || a[n] == 1)
        {
            return false;
        }
    }
    return true;
}