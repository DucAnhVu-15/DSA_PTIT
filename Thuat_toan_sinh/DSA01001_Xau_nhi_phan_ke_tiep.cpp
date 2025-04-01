#include <bits/stdc++.h>

using namespace std;

string s;
int final = 0;

void init()
{
    cin >> s;
}
void xau_ke_tiep()
{
    int i = s.length() - 1;
    while (i >= 0 && s[i] == '1')
    {
        s[i] = '0';
        i--;
    }
    //cout << i << endl;
    if (i >= 0)
    {
        s[i] = '1';
    }

    cout << s << endl;
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        init();
        xau_ke_tiep();
    }
}