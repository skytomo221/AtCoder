#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m;
    cin >> t >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
        cin >> b[i];
    for (int i = 0; i < m; i++)
    {
        if (a[0] > b[i] || b.size() - i > a.size() || a.size() == b.size() - i && a[0] + t < b[i])
        {
            cout << "no" << endl;
            return 0;
        }
        a.erase(a.begin());
    }
    cout << "yes" << endl;
    return 0;
}
