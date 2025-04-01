#include <bits/stdc++.h>

using namespace std;

int n, k;
int a[10000];
int final = 0;

void init();
void sinh_nhi_phan();
int countOnes();

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        final = 0;
        cin >> n >> k;
        init();
        while (!final)
        {
            if (countOnes() == k)
            {
                for (int i = 1; i <= n; i++)
                    cout << a[i];
                cout << endl;
            }
            sinh_nhi_phan();
        }
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

void sinh_nhi_phan()
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

int countOnes()
{
    int count = 0;
    for (int i = 1; i <= n; i++)
        if (a[i] == 1)
            count++;
    return count;
}
