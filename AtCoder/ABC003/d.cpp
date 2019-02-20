#include <bits/stdc++.h>
using namespace std;
#define to_number(n, r) (n * (n + 1) / 2 + r)
const long long int MOD = 1e9 + 7;

long long int combination(long long int n, long long int r, long long int mod)
{
    vector<long long int> c((n + 1) * (n + 2) / 2);
    for (long long int i = 0; i <= n; i++)
    {
        for (long long int j = 0; j <= i; j++)
        {
            if (i == j)
                c[to_number(i, j)] = 1;
            else if (j == 0)
                c[to_number(i, j)] = 1;
            else if (j == 1)
                c[to_number(i, j)] = i;
            else
            {
                c[to_number(i, j)] = (c[to_number((i - 1), (j - 1))] + c[to_number((i - 1), j)]) % mod;
            }
        }
    }
    return c[to_number(n, r)];
}

int main()
{
    long long int r, c, x, y, d, l, ans;
    cin >> r >> c >> x >> y >> d >> l;
    ans = combination(d + l, (d < l) ? d : l, MOD) * (r - x + 1) * (c - y + 1);
    ans %= MOD;
    cout << ans << endl;
    return 0;
}
