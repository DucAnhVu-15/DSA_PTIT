#include <bits/stdc++.h>
using namespace std;

void solve();

int main()
{
    int t = 1;
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
    vector<pair<int, int>> pos(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        pos[i] = {a[i], i};
    }

    int swapCount = 0;

    for (int i = 0; i < n; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (pos[j].first < pos[minIdx].first)
            {
                minIdx = j;
            }
        }
        if (minIdx != i)
        {
            swapCount++;
            swap(pos[i], pos[minIdx]);
        }
    }

    // vector<bool> visited(n, false);
    // int swapCount = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     if (visited[i] || pos[i].second == i)
    //         continue;

    //     int cycle_size = 0;
    //     int j = i;

    //     while (!visited[j])
    //     {
    //         visited[j] = true;
    //         j = pos[j].second;
    //         cycle_size++;
    //     }

    //     if (cycle_size > 1)
    //     {
    //         swapCount += cycle_size - 1;
    //     }
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << pos[i].first << " ";
    // }
    // cout << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << pos[i].second << " ";
    // }
    // cout << endl;
    cout << swapCount;
}
