#include <bits/stdc++.h>
using namespace std;

long long int count(long long int end, long long int mod)
{
    return end % mod + end / mod;
}

int main()
{
    long long int a, b, ans = 0;
    cin >> a >> b;
    for (long long int i = 0; i < 32; i++)
    {
        long long int cnt = count(b, 1LL << (i + 1)) - count(a, 1LL << (i + 1));
        cout << (1LL << i) << " " << cnt << endl;
        if (cnt % 2 != 0)
        {
            ans += 1 << i;
        }
    }
    cout << ans << endl;
    return 0;
}
