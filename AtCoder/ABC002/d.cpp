#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, x, y, ans = 0;
    cin >> n >> m;
    vector<int> f(n);
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        f[x] |= 1 << (y - 1);
        f[y] |= 1 << (x - 1);
    }
    for (int i = 0; i < n; i++)
        std::cout << std::bitset<12>(f[i]) << endl;

    
    for (int i = 0; i < 2 << n; i++)
    {
        int sum = i;
        for (int j = 0; j < n; j++)
        {
            if (f[i] & 1 << j)
            {
                std::cout << "-> " << std::bitset<12>(f[i] & 1 << j) << endl;
                sum &= f[i];
            }
        }
        if (ans < bitset<32>(sum).count())
            ans = bitset<32>(sum).count();
        if (sum) std::cout << ":) " << std::bitset<12>(sum) << endl;
    }
    cout << ans << endl;
    return 0;
}
