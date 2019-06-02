#include <bits/stdc++.h>
using namespace std;

int n, a, b, c, d;
string s;

bool exist2blocks(int begin, int end)
{
    for (int i = begin; i < end; i++)
    {
        if (s[i] == '#' && s[i + 1] == '#')
        {
            return true;
        }
    }
    return false;
}

bool exist3frees(int begin, int end)
{
    if (begin != 0) begin--;
    if (end < s.size()) end++;
    for (int i = begin; i < end - 1; i++)
    {
        if (s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.')
        {
            return true;
        }
    }
    return false;
}

int main()
{
    cin >> n >> a >> b >> c >> d;
    cin >> s;
    a--;
    b--;
    c--;
    d--;
    if (exist2blocks(a, c) || exist2blocks(b, d))
    {
        cout << "No" << endl;
    }
    else
    {
        if (c < d)
        {
            cout << "Yes" << endl;
        }
        else
        {
            if (exist3frees(b, d))
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
