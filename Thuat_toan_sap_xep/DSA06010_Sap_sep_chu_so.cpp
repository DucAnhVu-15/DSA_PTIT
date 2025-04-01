#include <bits/stdc++.h>

using namespace std;

void solve();
void tach_so(const string &a);

set<int> c;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        c.clear();
        solve();
        cout << '\n';
    }
}

void solve()
{

    int n, k;
    cin >> n;
    vector<string> a(n);

    for (string &i : a)
        cin >> i;

    for (const string &s : a)
        tach_so(s);

    for (int x : c)
        cout << x << ' ';
}

void tach_so(const string &a)
{
    for (char ch : a)
    {
        if (isdigit(ch))
            c.insert(ch - '0');
    }
}