#include <bits/stdc++.h>

using namespace std;

int n;
int a[10000], b[10000];
bool final;

void init()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1; 
    }
}

void solve()
{
    int i = n - 2;
    while (i >= 0 && a[i] > a[i + 1])
    {
        i--;
    }

    if (i < 0)
    {
        final = false; 
        return;
    }

    int j = n - 1;
    while (a[j] < a[i])
    {
        j--;
    }
    swap(a[i], a[j]);
    reverse(a + i + 1, a + n);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        init();
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int count = 1;
        final = true;

        while (final)
        {
            bool match = true;
            for (int i = 0; i < n; i++)
            {
                if (a[i] != b[i])
                {
                    match = false;
                    break;
                }
            }

            if (match)
            {
                cout << count << endl;
                break;
            }

            solve();
            count++;
        }
    }
    return 0;
}
