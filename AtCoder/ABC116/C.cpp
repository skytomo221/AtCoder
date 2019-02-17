#include <bits/stdc++.h>
using namespace std;

int n, x;
vector<int> h;

int f(int l, int r)
{
	cout << "[" << l << ", " << r << "]" << endl;
	if (l >= r)
		return h[l];
	if (l == r - 1)
		return max(h[l], h[r]);
	for (int i = l; i <= r; i++)
		if (h[i] == 0)
		{
			int _l = l, sum = 0;
			for (int i = l; i <= r; i++)
			{
				if (h[i] == 0)
				{
					sum += f(_l, i - 1);
					_l = i;
				}
			}
			return sum;
		}
	int _min_;
	for (int i = l; i <= r; i++)
	{
		if (_min_ >= h[i])
		{
			_min_ = h[i];
		}
	}
	for (int i = l; i < r; i++)
		h[i] -= _min_;
	return f(l, r);
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> h[i];
	}
	cout << f(0, n - 1) << endl;
	return 0;
}
