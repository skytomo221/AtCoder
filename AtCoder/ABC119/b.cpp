#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double y = 0;
    cin >> n;
    double x;
    string u;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> u;
        if (u == "JPY")
            y += x;
        else if (u == "BTC")
            y += (x * 380000.0);
    }
    cout << fixed << setprecision(9);
    cout << y << endl;
    return 0;
}
