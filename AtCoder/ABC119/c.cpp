#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans = 0;
    vector<int> a(3), a_min(3);
    cin >> n >> a[0] >> a[1] >> a[2];
    vector<int> l(n);
    for (int i = 0; i < n; i++)
    {
        cin >> l[i];
        a_min[i] = 1001;
    }
    sort(a.begin(), a.end());
    sort(l.begin(), l.end());
    int _min_ = 1001;
    vector<int> min_l;
    for (int i = 0; i < 1 << l.size(); i++)
    {
        int sum = 0;
        for (int j = 0; j < l.size(); j++)
        {
            if (i >> j & 1)
            {
                sum += l[j];
            }
        }
        cout << bitset<8>(i) << " " << sum << endl;
        if (_min_ > abs(sum - (a[0] + a[1] + a[2])))
        {
            _min_ = abs(sum - (a[0] + a[1] + a[2]));
            min_l.clear();
            for (int j = 0; j < l.size(); j++)
            {
                if (i >> j & 1)
                {
                    min_l.push_back(l[j]);
                }
            }
        }
    }
    cout << _min_ << endl;
    /*    for (int i = 0; i < a.size(); i++)
    {
        int _min_ = 1001;
        auto r = find(l.begin(), l.end(), a[i]);
        if (r != l.end())
        {
            l.erase(r);
            continue;
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                _min_ = min(_min_, abs(a[i] - l[j]));
            }
        }
        ans += _min_;
    }
*/
    cout << ans << endl;
    return 0;
}
