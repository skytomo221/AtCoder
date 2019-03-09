#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b;
    cin >> a >> b;
    long long int begin = a % 2 ? a + 1 : a, end = b % 2 ? b : b - 1;
    long long int ans = (a % 2 ? a : 0) ^ ((end - begin + 1) / 2 % 2) ^ (b % 2 ? 0 : b);
    cout << ans << endl;
    return 0;
}
