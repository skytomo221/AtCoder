#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, k, i, cnt = 0;
    cin >> a >> b >> k;
    for (i = 100; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            cnt++;
        }
        if (cnt == k)
        {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}
