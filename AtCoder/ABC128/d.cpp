#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, max = 0;
    vector<int> v;
    cin >> n >> k;
    v.resize(k);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int nk = (n < k) ? n : k;
    int ldqsum = 0, lqsum = 0, rqsum = 0, rdqsum = 0, sum = 0;
    for (int ldq = 0; ldq < nk; ldq++)
    {
        ldqsum -= v[ldq];
        for (int lq = 0; ldq + lq < nk; ldq++)
        {
            lqsum += v[lq];
            sum = ldqsum + lqsum + rqsum + rdqsum;
            cout << sum << endl;
            if (max < sum)
                max = sum;
            for (int rq = 0; ldq + lq + rq < nk; ldq++)
            {
                rqsum += v[n - 1 - rq];
                sum = ldqsum + lqsum + rqsum + rdqsum;
                cout << sum << endl;
                if (max < sum)
                    max = sum;
                for (int rdq = 0; ldq + lq + rq + rdq < nk; ldq++)
                {
                    rdqsum -= v[n - 1 - rdq];
                    sum = ldqsum + lqsum + rqsum + rdqsum;
                    cout << sum << endl;
                    if (max < sum)
                        max = sum;
                }
                sum = 0;
                rdqsum = 0;
            }
            rqsum = 0;
        }
        lqsum = 0;
    }
    cout << max << endl;
    return 0;
}
