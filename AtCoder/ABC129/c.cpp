#include <bits/stdc++.h>
using namespace std;

long long int mod = 1000000007;

vector<long long int> c(100010);
long long int fib(long long int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (c[n - 2] == -1)
        c[n - 2] = fib(n - 2);
    if (c[n - 1] == -1)
        c[n - 1] = fib(n - 1);
    return (c[n - 2] + c[n - 1]) % mod;
}

int main()
{
    long long int n, m, ans = 1;
    vector<long long int> a;
    cin >> n >> m;
    c[0] = 0;
    c[1] = 1;
    for (long long int i = 2; i < 100010; i++)
    {
        c[i] = (c[i - 1] + c[i - 2]) % mod;
    }
    a.resize(m + 2);
    a[0] = -1;
    a[m + 1] = n + 1;
    for (long long int i = 1; i < m + 1; i++)
    {
        cin >> a[i];
    }
    for (long long int i = 0; i <= m; i++)
    {
        long long int diff = a[i + 1] - a[i] - 1;
        ans = (ans * fib(diff)) % mod;
        // cout << diff << " " << fib(diff) << endl;
    }
    cout << ans << endl;
    return 0;
}
