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

    vector<int> result;
    while (left <= right)
    {
        if (left != right)
        {
            result.push_back(a[right]); // Lấy số lớn nhất
            result.push_back(a[left]);  // Lấy số nhỏ nhất
        }
        else
        {
            result.push_back(a[left]); // Nếu còn một phần tử, thêm vào
        }
        left++;
        right--;
    }

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}
