#include <bits/stdc++.h>
using namespace std;

void solve();

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << '\n';
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);

    for (int &i : a)
        cin >> i;

    for (int &x : b)
        cin >> x;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            long long x = a[i];
            long long y = b[j];

            if (pow(x, y) > pow(y, x))
                count++;
        }
    }
    cout << count;
}
