#include <bits/stdc++.h>
using namespace std;

int numofbits(int bits)
{
    int num;

    num = (bits >> 1) & 03333333333;
    num = bits - num - ((num >> 1) & 03333333333);
    num = ((num + (num >> 3)) & 0707070707) % 077;

    return num;
}

int main()
{
    int n, m;
    vector<int> s;
    vector<int> k, p;
    cin >> n >> m;
    s.resize(m);
    k.resize(m);
    p.resize(m);
    for (int i = 0; i < m; i++)
    {
        cin >> k[i];
        for (int j = 0; j < k[i]; j++)
        {
            int ss = 0;
            cin >> ss;
            ss = 1 << (ss - 1);
            s[i] |= ss;
        }
    }
    for (int i = 0; i < m; i++)
    {
        cin >> p[i];
    }
    int cnt = 0;
    for (int i = 0; i < (1 << n); i++)
    {
        bool flag = true;
        for (int j = 0; j < m; j++)
        {
            // cout << i << " " << j << " " << s[j] << " " << (i & s[j]) << endl;
            if (numofbits(i & s[j]) % 2 == p[j])
                continue;
            else
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
