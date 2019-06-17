#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, x, sum = 0, cnt = 1;
	vector<int> l;
	cin >> n >> x;
	l.resize(n);
	for (int i = 0; i < n; i++)
	{
		cin >> l[i];
	}
	for (int i = 0; i < n; i++)
	{
		sum += l[i];
		if (sum > x)
			break;
		cnt++;
		// cout << sum << endl;		
	}
	cout << cnt << endl;
	return 0;
}
