#include <bits/stdc++.h>
using namespace std;

int n, ans, l;
int main()
{
	cin >> n;
	vector<int> h(n);
	for (int i = 0; i < n; i++)
	{
		cin >> h[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (l < h[i])
			ans += h[i] - l;
		l = h[i];
	}
	cout << ans << endl;
	return 0;
}
