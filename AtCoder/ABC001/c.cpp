#include <bits/stdc++.h>
using namespace std;

int main()
{
    int deg, dis;
    double ddis;
    string d[] = {"N", "NNE", "NE", "ENE", "E", "ESE", "SE", "SSE", "S", "SSW", "SW", "WSW", "W", "WNW", "NW", "NNW"};
    double beaufort[] = {0.2, 1.5, 3.3, 5.4, 7.9, 10.7, 13.8, 17.1, 20.7, 24.4, 28.4, 32.6};
    cin >> deg >> dis;
    ddis = floor(((double)dis / 60.0 + 0.05) * 10.0) / 10.0;
    for (int i = 0; i < 12; i++)
    {
        if (ddis <= beaufort[i])
        {
            dis = i;
            break;
        }
        if (i == 11)
            dis = 12;
    }
    cout << ((dis) ? d[(deg * 10 + 1125) / 2250 % 16] : "C") << " " << dis << endl;
    return 0;
}
