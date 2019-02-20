#include <bits/stdc++.h>
using namespace std;

long long int x;

long long int l[87];
long long int lucas(long long int n)
{
    for (int i = 2; i <= n; i++)
        l[i] = l[i - 1] + l[i - 2];
    return l[n];
}

int main()
{
    l[0] = 2;
    l[1] = 1;
    cin >> x;
    cout << lucas(x) << endl;
    return 0;
}
