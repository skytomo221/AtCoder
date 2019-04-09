#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    vector<long long int> a(5);
    vector<long long int> c(6);
    long long int t = 0;
    cin >> n;
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 6; i++)
    {
        c[i] = 0;
    }
    c[0] = n;
    while (c[5] != n)
    {
        for (int i = 4; i >= 0; i--)
        {
            int u = (c[i] / a[i] != 0) ? a[i] : c[i];
            c[i] -= u;
            c[i + 1] += u;
        }
        t++;
        cout << t << " ";
        for (int i = 0; i < 6; i++)
        {
            cout << c[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
