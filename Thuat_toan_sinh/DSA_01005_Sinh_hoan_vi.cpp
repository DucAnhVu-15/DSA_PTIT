#include <bits/stdc++.h>

using namespace std;

int n, k;
int a[10000];

void init();
void solve();

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        init();
        solve();
    }
}

void init()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
        cout << a[i];
    }
    cout << " ";
}

void solve()
{
    while (next_permutation(a, a + n))
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[i];
        }
        cout << " ";
    }
    cout << endl;
}