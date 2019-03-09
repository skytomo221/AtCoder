#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, c, sum = 0, ans, a = 0;
    vector<int> b;
    cin >> n >> m >> c;
    b.resize(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    for (int j = 0; j < n; j++)
    {
        ans = c;
        for (int i = 0; i < m; i++)
        {
            cin >> a;
            ans += a * b[i];
        }
        if (ans > 0)
            sum++;
    }
    cout << sum << endl;
    return 0;
}
