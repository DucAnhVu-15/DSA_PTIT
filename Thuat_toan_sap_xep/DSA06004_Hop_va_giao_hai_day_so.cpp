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
        cout << endl;
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);

    map<int, int> arr;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        arr[a[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        arr[b[i]]++;
    }

    for (auto it : arr)
    {
        cout << it.first << " ";
    }
    cout << endl;

    for (auto it : arr)
    {
        if (it.second > 1)
            cout << it.first << " ";
    }
}
