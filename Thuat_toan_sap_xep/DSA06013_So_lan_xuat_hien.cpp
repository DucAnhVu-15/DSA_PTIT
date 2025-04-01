#include <bits/stdc++.h>
using namespace std;

void solve();

// unordered_map<int, int> freq;

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

    int freq[1000000] = {0};

    for (int &x : a)
    {
        cin >> x;
        freq[x]++;
    }

    if (freq[k] == 0)
    {
        cout << -1;
    }
    else
        cout << freq[k];
}
