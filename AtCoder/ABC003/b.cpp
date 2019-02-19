#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t, a = "atcoder";
    cin >> s >> t;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == t[i] || s[i] == '@' && a.find(t[i]) != string::npos || t[i] == '@' && a.find(s[i]) != string::npos)
            continue;
        cout << "You will lose" << endl;
        return 0;
    }
    cout << "You can win" << endl;
    return 0;
}
