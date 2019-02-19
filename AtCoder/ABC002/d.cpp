#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, x, y, ans = 0;
    cin >> n >> m;
    vector<int> f(n);
    for (int i = 0; i < m; i++)
        f[i] |= 1 << i;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        f[x - 1] |= 1 << (y - 1);
        f[y - 1] |= 1 << (x - 1);
    }

    //for (int i = 0; i < n; i++)
    //    std::cout << std::bitset<12>(f[i]) << endl;
    //cout << endl;

    //cout << n << " " << (1 << n) << endl;
    for (int i = 0; i < 1 << n; i++)
    {
        int sum = i;
        if (ans > bitset<32>(i).count())
            continue;
        // cout << i << ": ";
        for (int j = 0; j < n; j++)
        {
            if (i >> j & 1)
            {
                sum &= f[j];
            }
        }
        if (ans < bitset<32>(sum).count())
            ans = bitset<32>(sum).count();
        // std::cout << std::bitset<12>(sum) << endl;
    }
    cout << ans << endl;
    return 0;
}
