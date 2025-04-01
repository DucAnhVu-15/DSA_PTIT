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

    for (int &x : a)
    {
        cin >> x;
    }

    sort(a.begin(), a.end());

    int left = 0, right = n - 1;
    int min_sum = INT_MAX; // Tổng gần 0 nhất

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum = a[i] + a[j];
            if (abs(sum) < abs(min_sum))
            {
                min_sum = sum;
            }
        }
    }
    cout << min_sum;
}
