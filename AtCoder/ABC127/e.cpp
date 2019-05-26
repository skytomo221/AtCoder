#include <bits/stdc++.h>
using namespace std;

long long int sum = 0;
int main()
{
    long long int n, m, k;
    cin >> n >> m >> k;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            sum += abs(i * n - n * n * (n + 1) / 2) + abs(j * n - n * n * (n + 1) / 2);
            cout << (i * n - n * n * (n + 1) / 2);
            sum %= (long long int)1e9 + 7;
        }
    }
    cout << sum << endl;
}
