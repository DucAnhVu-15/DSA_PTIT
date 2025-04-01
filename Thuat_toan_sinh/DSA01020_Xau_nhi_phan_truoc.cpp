#include <bits/stdc++.h>

using namespace std;

int n;
string s;

void init();
void xau_nhi_phan_truoc();

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        init();
        xau_nhi_phan_truoc();
    }
}

void init()
{
    cin >> s;
}

void xau_nhi_phan_truoc()
{
    int i = s.length() - 1;

    while (i >= 0 && s[i] == '0')
    {
        s[i] = '1';
        i--;
    }
    if (i >= 0)
    {
        s[i] = '0';
    }
    cout << s << endl;
    return;
}
