#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector<string> s;
    vector<int> p;
    vector<int> ranking;
    cin >> n;
    s.resize(n);
    p.resize(n);
    ranking.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i] >> p[i];
    }
    for (int i = 0; i < n; i++)
    {
        int rank = 0;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            else if (s[i] == s[j])
            {
                if (p[i] < p[j])
                    rank++;
            }
            else if (s[i] > s[j])
                rank++;
            // cout << " " << s[i] << p[i] << s[j] << p[j] << " " << rank << endl;
        }
        ranking[rank] = i;
    }
    for (int i = 0; i < n; i++)
    {
        cout << ranking[i] + 1 << endl;
    }
    return 0;
}
