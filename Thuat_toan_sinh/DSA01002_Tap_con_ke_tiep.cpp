#include <bits/stdc++.h>

using namespace std;

int n, k;

vector<int> a(k);

void init()
{
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> a[i];
    }
}

void tap_con_ke_tiep()
{
    int i = k - 1;
    while (i >= 0 && a[i] == n - k + i + 1)
    {
        i--;
    }

    if (i < 0)
    {
        for (int j = 0; j < k; j++)
        {
            cout << j + 1 << " ";
        }
    }
    else
    {
        a[i]++;
        for (int j = i + 1; j < k; j++)
        {
            a[j] = a[j - 1] + 1;
        }
    }
    for (int num : a)
    {
        cout << num << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        init();
        tap_con_ke_tiep();
    }
}