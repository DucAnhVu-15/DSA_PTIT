/*
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
    int n, X;
    cin >> n >> X;
    vector<int> a(n);
    vector<pair<int, int>> diff(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        diff[i] = {abs(a[i] - X), a[i]};
    }

    // Sắp xếp bằng thuật toán sắp xếp chọn (Selection Sort)
    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (diff[j].first < diff[minIdx].first ||
                (diff[j].first == diff[minIdx].first && diff[j].second < diff[minIdx].second))
            {
                minIdx = j;
            }
        }
        swap(diff[i], diff[minIdx]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << diff[i].second << (i == n - 1 ? "\n" : " ");
    }
}
*/
/*=====================================================================================*/
/*
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
    int n, X;
    cin >> n >> X;
    vector<int> a(n);
    for (int &i : a)
    {
        cin >> i;
    }

    stable_sort(a.begin(), a.end(), [X](int a, int b)
                { return abs(a - X) < abs(b - X); });

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, X;
        cin >> n >> X;
        vector<int> a(n);
        vector<pair<int, int>> dff(n);

        for (int i = 0; i < a.size(); i++)
        {
            cin >> a[i];
            dff[i] = {abs(a[i] - X), a[i]};
        }

        for (int i = 0; i < dff.size(); i++)
        {
            for (int j = i + 1; j < dff.size(); j++)
            {
                if ((dff[i].first > dff[j].first))
                {
                    swap(dff[i], dff[j]);
                }
            }
        }

        for (int i = 0; i < dff.size(); i++)
        {
            cout << dff[i].second << " ";
        }
        cout << endl;
    }
}