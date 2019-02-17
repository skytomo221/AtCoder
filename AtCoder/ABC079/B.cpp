#include <bits/stdc++.h>
using namespace std;

long long int x, l[87];

long long int lucas(long long int n)
{
    if (n == 0)
        return 2;
    else if (n == 1)
        return 1;
    else
    {
        long long int sum = 0;   
        if (l[n - 1])
            sum = l[n - 1];
        else
            sum = (l[n - 1] = lucas(n - 1));
        if (l[n - 2])
            sum += l[n - 2];
        else
            sum += (l[n - 2] = lucas(n - 2));
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