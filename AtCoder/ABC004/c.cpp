#include <bits/stdc++.h>
using namespace std;

string s = "123456";
int main()
{
    int n;
    cin >> n;
    string a = "      ";
    a[(n - 1) % 5 + 1] = (n - 1) / 5 % 6 + '1';
    int j = ((n - 1) / 5 + 1) % 6;
    for (int i = 0; i < 6; i++)
        if (a[i] == ' ')
            a[i] = j++ % 6 + '1';
    cout << a << endl;
    return 0;
}
