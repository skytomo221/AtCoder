#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> r(n);
    for (int i = 0; i < n; i++)
        cin >> r[i];
    sort(r.begin(), r.end());
    double ans = 0.0;
    for (int i = n - k; i < n; i++)
        ans = (ans + r[i]) / 2;
    cout << fixed << setprecision(9);
    cout << ans << endl;
    return 0;
}
