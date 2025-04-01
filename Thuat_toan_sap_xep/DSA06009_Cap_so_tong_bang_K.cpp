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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for (int &i : a)
        cin >> i;

    sort(a.begin(), a.end());

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == k)
            {
                count++;
            }
        }
    }
    cout << count;
}