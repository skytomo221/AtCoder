#include <bits/stdc++.h>
using namespace std;
#define mod (10e9+7)
int main()
{
    long long int r, c, x, y, d, l, ans;
    cin >> r >> c >> x >> y >> d >> l;
    ans = (r - x + 1) * (c - y + 1);

    cout << ans << endl;
    return 0;
}
