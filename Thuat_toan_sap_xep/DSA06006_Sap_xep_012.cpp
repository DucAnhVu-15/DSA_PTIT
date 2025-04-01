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
    int n;
    cin >> n;
    vector<int> a(n);

    for (int &i : a)
    {
        cin >> i;
    }

    sort(a.begin(), a.end());
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}
