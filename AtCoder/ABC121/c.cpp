#include <bits/stdc++.h>
using namespace std;

long long int n, m;
vector<pair<long long int, long long int>> v;

int main()
{
    cin >> n >> m;
    v.resize(n);
    for (long long int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;
    sort(v.begin(), v.end());
    /*for (long long int i = 0; i < n; i++)
        cout << (v[i].first) << " " << (v[i].second) << endl;*/
    long long int i, sum = 0, ans = 0;
    for (i = 0; i < n && m > sum; i++)
    {
        sum += v[i].second;
        ans += v[i].second * v[i].first;
        //cout << i << " : " << sum << " " << ans << endl;
    }
    i--;
    //cout << sum << " " << m << " " << (m - sum) << endl;
    ans += v[i].first * (m - sum);
    cout << ans << endl;
    return 0;
}
