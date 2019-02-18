#include <bits/stdc++.h>
using namespace std;

int main()
{
    int deg, dis;
    string d;
    cin >> deg >> dis;
    if (dis <= 2 * 6)
        dis = 0;
    else if (dis <= 15 * 6)
        dis = 1;
    else if (dis <= 33 * 6)
        dis = 2;
    else if (dis <= 54 * 6)
        dis = 3;
    else if (dis <= 79 * 6)
        dis = 4;
    else if (dis <= 107 * 6)
        dis = 5;
    else if (dis <= 138 * 6)
        dis = 6;
    else if (dis <= 171 * 6)
        dis = 7;
    else if (dis <= 207 * 6)
        dis = 8;
    else if (dis <= 244 * 6)
        dis = 9;
    else if (dis <= 284 * 6)
        dis = 10;
    else if (dis <= 326 * 6)
        dis = 11;
    else
        dis = 12;
    if (!dis)
        d = "C";
    else if (deg <= 112)
        d = "N";
    else if (deg <= 337)
        d = "NNE";
    else if (deg <= 562)
        d = "NE";
    else if (deg <= 787)
        d = "ENE";
    else if (deg <= 1012)
        d = "E";
    else if (deg <= 1237)
        d = "ESE";
    else if (deg <= 1462)
        d = "SE";
    else if (deg <= 1687)
        d = "SSE";
    else if (deg <= 1912)
        d = "S";
    else if (deg <= 2137)
        d = "SSW";
    else if (deg <= 2362)
        d = "SW";
    else if (deg <= 2587)
        d = "WSW";
    else if (deg <= 2812)
        d = "W";
    else if (deg <= 3037)
        d = "WNW";
    else if (deg <= 3262)
        d = "NW";
    else if (deg <= 3487)
        d = "NNW";
    else
        d = "N";
    cout << d << " " << dis << endl;
    return 0;
}
