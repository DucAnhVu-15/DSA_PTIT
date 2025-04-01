#include <bits/stdc++.h>

using namespace std;

int n;
int a[10000];

void init()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void solve()
{
    int i = n - 2; // Bắt đầu từ phần tử trước cuối
    while (i >= 0 && a[i] >= a[i + 1])
    {
        i--;
    }

    if (i >= 0) // Nếu chưa phải hoán vị lớn nhất
    {
        int j = n - 1;
        while (a[j] <= a[i]) // Tìm phần tử lớn hơn a[i] từ cuối
        {
            j--;
        }
        swap(a[i], a[j]); // Đổi chỗ hai phần tử
    }
    
    reverse(a + i + 1, a + n); // Đảo ngược phần phía sau

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        init();
        solve();
    }
}
