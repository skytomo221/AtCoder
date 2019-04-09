#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> a(5);
	int sum = 0, min = 9, min_i = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
		if (min > a[i] % 10 && a[i] % 10 != 0)
		{
			min = a[i] % 10;
			min_i = i;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		if (min_i == i)
			continue;
		if (a[i] % 10 != 0) a[i] = a[i] + 10 - a[i] % 10;
		sum += a[i];
	}
	sum += a[min_i];
	cout << sum << endl;
	return 0;
}
