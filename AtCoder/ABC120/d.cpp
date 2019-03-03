#include <bits/stdc++.h>
#define vc(a, b) (((b)-2 + 1) * ((b)-2) + ((a)-1))
using namespace std;
int a, b, n, m;
vector<long long int> v;
vector<long long int> cost;

int main()
{
    cin >> n >> m;
    v.resize(vc(n, n) + 1);
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        v[vc(b, a)] = 1;
        int cnt = 0;
        for (int j = 0; j <= vc(n, n); j++)
        {
            if (v[j] == 1)
                cnt++;
        }
        cost.push_back(cnt);
        cout << cnt << endl;
    }

    cout << "test" << endl;
    return 0;
}
