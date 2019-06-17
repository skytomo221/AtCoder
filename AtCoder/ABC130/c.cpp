#include <bits/stdc++.h>
using namespace std;

int main()
{
	double w, h, x, y;
	int ans = 0;
	cin >> w >> h >> x >> y;
	if (w == h && x == y && 0 < x && x < w && 0 < y && y < h)
		ans = 1;
	if (w / 2.0 == x && h / 2.0 == y && 0 < x && x < w && 0 < y && y < h)
		ans = 1;
	cout << fixed << setprecision(10) << (w * h / 2) << " " << ans << endl;
	return 0;
}
