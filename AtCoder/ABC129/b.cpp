#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0;
    vector<int> w;
    cin >> n;
    w.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
        sum += w[i];
    }
    int minsum = 1e7, karui, omoi;
    for (int t = 0; t < n; t++)
    {
        karui = omoi = 0;
        for (int i = 0; i < n; i++)
        {
            if (t < i)
                omoi += w[i];
            else
                karui += w[i];
        }
        // cout << t << " " << omoi << " " << karui << endl;
        int a = abs(omoi - karui);
        if (a < minsum)
            minsum = a;
    }
    cout << minsum << endl;
    return 0;
}
