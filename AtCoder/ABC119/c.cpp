#include <bits/stdc++.h>
using namespace std;

int n, a, b, c;
vector<int> l;

int dfs(int cur, int ma, int mb, int mc)
{
    if (cur == n)
        return (min({ma, mb, mc}) > 0)
                   ? abs(a - ma) + abs(b - mb) + abs(c - mc) - 30
                   : 1e9;
    int ret0 = dfs(cur + 1, ma, mb, mc);
    int ret1 = dfs(cur + 1, ma + l[cur], mb, mc) + 10;
    int ret2 = dfs(cur + 1, ma, mb + l[cur], mc) + 10;
    int ret3 = dfs(cur + 1, ma, mb, mc + l[cur]) + 10;
    return min({ret0, ret1, ret2, ret3});
}

int main()
{
    cin >> n >> a >> b >> c;
    l.resize(n);
    for (int i = 0; i < n; i++)
        cin >> l[i];
    cout << dfs(0, 0, 0, 0) << endl;
    return 0;
}
