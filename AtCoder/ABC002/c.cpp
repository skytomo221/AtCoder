#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int> a, b, c;
    cin >> a.first >> a.second >> b.first >> b.second >> c.first >> c.second;
    b.first -= a.first;
    c.first -= a.first;
    b.second -= a.second;
    c.second -= a.second;
    cout << fixed << setprecision(2) << (abs((double)(b.first * c.second - b.second * c.first)) / 2.0) << endl;
    return 0;
}
