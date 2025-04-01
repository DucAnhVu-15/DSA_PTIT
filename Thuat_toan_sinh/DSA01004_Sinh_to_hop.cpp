#include <bits/stdc++.h>

using namespace std;

int n, k;
int a[10000];

vector<int> combination;

void init();
void solve(int start);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        init();
        solve(1);
        cout << endl;
    }
}

void init()
{
    cin >> n >> k;
    for (int i = 0; i < n - 1; i++)
    {
        a[i] = i + 1;
    }
}

void solve(int start)
{
    if (combination.size() == k)
    {
        for (int num : combination)
        {
            cout << num;
        }
        cout << " ";
    }

    for (int i = start; i <= n; i++)
    {
        combination.push_back(i);
        solve(i + 1);
        combination.pop_back();
    }
}
