#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, g, b, n, sum = 0, cnt = 0;
    cin >> r >> g >> b >> n;
    for (int i = 0;; i++)
    {
        for (int j = 0;; j++)
        {
            for (int k = 0;; k++)
            {
                sum = r * i + g * j + b * k;
                if (sum == n)
                    cnt++;
                else if (sum > n)
                    break;
            }
            if (r * i + g * j > n)
                break;
        }
        if (r * i > n)
            break;
    }
    cout << cnt << endl;
    return 0;
}
