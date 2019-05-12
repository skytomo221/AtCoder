#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0, m, a = 0, b = 0, ab = 0;
    vector<string> s;
    cin >> n;
    s.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        for (int j = 0; j < s[i].length() - 1; j++)
        {
            if (s[i][j] == 'A' && s[i][j + 1] == 'B')
                cnt++;
        }
        if (s[i][s[i].length() - 1] == 'A')
        {
            a++;
            ab++;
        }
        if (s[i][0] == 'B')
        {
            b++;
            ab++;
        }
        if (ab % 2 != 0)
            ab--;
    }
    m = (a < b) ? a : b;
    cnt += m;
    if (a == b && ab / 2 == b)
        cnt--;
    cout << cnt << endl;
    return 0;
}
