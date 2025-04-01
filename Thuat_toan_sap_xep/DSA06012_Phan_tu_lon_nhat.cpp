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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for (int &x : a)
    {
        cin >> x;
    }

    sort(a.begin(), a.end());

    while (k--)
    {
        cout << a[n - 1] << " ";
        n--;
    }
}
