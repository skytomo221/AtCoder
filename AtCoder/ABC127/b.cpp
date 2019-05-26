#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, d, x2000;
    vector<int> x(10);
    cin >> r >> d >> x2000;
    x[0] = r * x2000 - d;
    cout << x[0] << endl;
    for (int i = 1; i < 10; i++)
    {
        x[i] = r * x[i - 1] - d;
        cout << x[i] << endl;
    }
    return 0;
}
