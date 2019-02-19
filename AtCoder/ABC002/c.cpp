#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ax, ay, bx, by, cx, cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;
    bx -= ax;
    cx -= ax;
    by -= ay;
    cy -= ay;
    cout << fixed << setprecision(2) << (abs((double)(bx * cy - by * cx)) / 2.0) << endl;
    return 0;
}
