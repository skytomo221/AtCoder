#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int n, k, ans = 0;
	vector<long long int> a, v(1);
	cin >> n >> k;
	a.resize(n);
	v[0] = -1;
	for (long long int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] >= k)
		{
			v.push_back(i);
		}
	}
	v.push_back(n + 1);
	for (long long int vi = 0; vi < v.size() - 1; vi++)
	{
		long long int vbegin = v[vi] + 1, vend = v[vi + 1] - 1;
		for (long long int i = vbegin; i < vend; i++)
		{
			long long int sum = 0;
			for (long long int j = i; j < vend; j++)
			{
				sum += a[j];
				// cout << sum << endl;
				if (sum >= k)
				{
					// cout << "i, j = " << i << " " << j << endl;
					ans += n - j;
					// cout << "ans = " <<ans<<endl;
					break;
				}
			}
		}
	}
	cout << ans << endl;
	return 0;
}
