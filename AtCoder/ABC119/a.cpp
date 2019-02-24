#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y, m, d;
    scanf("%d/%d/%d", &y, &m, &d);
    if (y < 2019 || y == 2019 && m < 4 || y == 2019 && m == 4 && d <= 30)
        cout << "Heisei" << endl;
    else
        cout << "TBD" << endl;
    return 0;
}
