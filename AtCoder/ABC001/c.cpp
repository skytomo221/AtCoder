#include <bits/stdc++.h>
using namespace std;

int main()
{
    int deg, dis;
    double ddeg, ddis;
    string d;
    cin >> deg >> dis;
    ddis = floor((double)dis / 60.0 + 0.05);
    ddeg = (double)deg / 10.0;
    if (ddis <= 0.2)
        dis = 0;
    else if (ddis <= 1.5)
        dis = 1;
    else if (ddis <= 3.3)
        dis = 2;
    else if (ddis <= 5.4)
        dis = 3;
    else if (ddis <= 7.9)
        dis = 4;
    else if (ddis <= 10.7)
        dis = 5;
    else if (ddis <= 13.8)
        dis = 6;
    else if (ddis <= 17.1)
        dis = 7;
    else if (ddis <= 20.7)
        dis = 8;
    else if (ddis <= 24.4)
        dis = 9;
    else if (ddis <= 28.4)
        dis = 10;
    else if (ddis <= 32.6)
        dis = 11;
    else
        dis = 12;
    if (!dis)
        d = "C";
    else if (11.25 <= ddeg && ddeg < 33.75)
        d = "NNE";
    else if (33.75 <= ddeg && ddeg < 56.25)
        d = "NE";
    else if (56.25 <= ddeg && ddeg < 78.75)
        d = "ENE";
    else if (78.75 <= ddeg && ddeg < 101.25)
        d = "E";
    else if (101.25 <= ddeg && ddeg < 123.75)
        d = "ESE";
    else if (123.75 <= ddeg && ddeg < 146.25)
        d = "SE";
    else if (146.25 <= ddeg && ddeg < 168.75)
        d = "SSE";
    else if (168.75 <= ddeg && ddeg < 191.25)
        d = "S";
    else if (191.25 <= ddeg && ddeg < 213.75)
        d = "SSW";
    else if (213.75 <= ddeg && ddeg < 236.25)
        d = "SW";
    else if (236.25 <= ddeg && ddeg < 258.75)
        d = "WSW";
    else if (258.75 <= ddeg && ddeg < 281.25)
        d = "W";
    else if (281.25 <= ddeg && ddeg < 303.75)
        d = "WNW";
    else if (303.75 <= ddeg && ddeg < 326.25)
        d = "NW";
    else if (326.25 <= ddeg && ddeg < 348.75)
        d = "NNW";
    else
        d = "N";
    cout << d << " " << dis << endl;
    return 0;
}
