#include <bits/stdc++.h>
using namespace std;

long long int x, l[87];

long long int lucas(long long int n)
{
    switch (n)
    {
    case 0:
        return 2;
    case 1:
        return 1;
    default:
        long long int sum = 0;
        sum = (l[n - 1]) ? l[n - 1] : (l[n - 1] = lucas(n - 1));
        sum += (l[n - 2]) ? l[n - 2] : (l[n - 2] = lucas(n - 2));
        return sum;
    }
}

int main()
{
    l[0] = 2;
    l[1] = 1;
    cin >> x;
    cout << lucas(x) << endl;
    return 0;
}