#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, l, r, cnt = 0;
    vector<int> v;
    cin >> n >> m;
    v.resize(n + 2);
    for (int i = 0; i < n + 2; i++)
    {
        v[i] = 0;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> l;
        v[l] += 1;
        cin >> r;
        v[r + 1] += -1;
    }
    for (int i = 1; i < n + 2; i++)
    {
        v[i] += v[i - 1];
        if (v[i] == m)
            cnt++;
        // cout << i << ": " << v[i] << " += " << v[i - 1] << endl;
    }
    cout << cnt << endl;
    return 0;
}
