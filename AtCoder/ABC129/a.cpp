#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p, q, r;
    cin >> p >> q >> r;
    int ans = min(min(p + q, p + r), r + q);
    cout << ans << endl;
    return 0;
}
