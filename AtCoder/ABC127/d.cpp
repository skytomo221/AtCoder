#include <bits/stdc++.h>
using namespace std;

bool pairCompare(const pair<long long int, long long int> &p1, const pair<long long int, long long int> &p2)
{
    return p1.second > p2.second;
}

int main()
{
    long long int n, m;
    vector<long long int> a;
    vector<pair<long long int, long long int>> vp;
    cin >> n >> m;
    a.resize(n);
    vp.resize(m);
    for (long long int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    std::sort(a.begin(), a.end());
    for (long long int i = 0; i < m; i++)
    {
        cin >> vp[i].first >> vp[i].second;
    }
    std::sort(vp.begin(), vp.end(), pairCompare);
    /*
    for (long long int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    for (long long int i = 0; i < m; i++)
    {
        cout << vp[i].first << " " << vp[i].second << endl;
    }
    */
    long long int c = 0, sum = 0;
    for (long long int i = 0; i < n && c < m; c++)
    {
        if (a[i] >= vp[c].second)
            break;
        for (; vp[c].first > 0; i++, vp[c].first--)
        {
            if (a[i] < vp[c].second)
                a[i] = vp[c].second;
            else
                break;
        }
    }
    for (long long int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    cout << sum << endl;
    return 0;
}
