#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int zero = 0, one = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
            zero++;
        else
            one++;
    }
    cout << min(zero, one) * 2 << endl;
    return 0;
}
