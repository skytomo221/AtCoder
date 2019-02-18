#include <bits/stdc++.h>
using namespace std;

int main()
{
    int deg, dis, w;
    double ddis;
    string d[] = {"N", "NNE", "NE", "ENE", "E", "ESE", "SE", "SSE", "S", "SSW", "SW", "WSW", "W", "WNW", "NW", "NNW"};
    double beaufort[] = {0.2, 1.5, 3.3, 5.4, 7.9, 10.7, 13.8, 17.1, 20.7, 24.4, 28.4, 32.6};
    cin >> deg >> dis;
    ddis = round((double)dis / 60.0 * 10.0) / 10.0;
    for (w = 0; w < 12; w++)
        if (ddis <= beaufort[w])
            break;
    cout << (w ? d[(deg * 10 + 1125) / 2250 % 16] : "C") << " " << w << endl;
    return 0;
}
