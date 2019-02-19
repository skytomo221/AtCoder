#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, x, y, ans = 0;
    cin >> n >> m;
    vector<int> f(n);
    for (int i = 0; i < n; i++)
        f[i] |= 1 << i;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        x--;
        y--;
        f[x] |= 1 << y;
        f[y] |= 1 << x;
    }
    for (int i = 0; i < 1 << n; i++)
    {
        int sum = i;
        if (ans > bitset<32>(i).count())
            continue;
        for (int j = 1; j < n; j++)
        {
            if (i >> j & 1)
            {
                sum &= f[j];
            }
        }
        if (ans < bitset<32>(sum).count())
            ans = bitset<32>(sum).count();
    }
    cout << ans << endl;
    return 0;
}
