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

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> b = a;
    sort(a.begin(), a.end());

    int index_left = 0;
    int index_right = n - 1;

    while (a[index_left] == b[index_left])
    {
        index_left++;
    }

    while (a[index_right] == b[index_right])
    {
        index_right--;
    }

    cout << index_left + 1 << " " << index_right + 1;
}