#include <bits/stdc++.h>
using namespace std;

int n, x;
vector<int> h;

int times(int begin, int end)
{
	int _min_, where = begin;
	if (begin == end - 1)
	{
		cout << "sum += " << max(h[begin], h[end]) << endl;
		return max(h[begin], h[end]);
	}
	_min_ = min(h[begin], h[begin + 1]);
	for (int i = begin; i < end; i++)
	{
		if (_min_ >= h[i])
		{
			where = i;
			_min_ = h[i];
		}
	}
	cout << "[" << begin << "," << end << "]" << endl;
	cout << "min : " << _min_ << endl;
	cout << "where : " << where << endl;
	for (int i = begin; i < end; i++)
		cout << h[i] << ", ";
	cout << endl;
	for (int i = begin; i < end; i++)
		h[i] -= _min_;
	for (int i = begin; i < end; i++)
		cout << h[i] << ", ";
	cout << endl;

	int sum = _min_;
	while (!h[begin])
	{
		begin++;
		if (begin >= end)
			return _min_;
	}
	for (int i = begin; i <= end;)
	{
		if (h[i] == 0)
		{
			cout << "40L:  [" << begin << "," << i << "]" << endl;
			sum += times(begin, i);
			while (!h[begin])
			{
				begin++;
				if (begin >= end)
					return _min_;
			}
			cout << "sum : " << sum << endl;
		}
		else
		{
			i++;
		}
	}
	cout << "f_sum : " << sum << endl;
	return sum;
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		h.push_back(x);
	}
	int sum = 0, begin = 0;
	while (!h[begin])
	{
		begin++;
		if (begin >= n)
		{
			sum += times(begin, n);
			cout << sum << endl;
			return 0;
		}
	}
	for (int i = begin; i < n;)
	{
		if (h[i] == 0)
		{
			cout << "main:  [" << begin << "," << i << "]" << endl;
			sum += times(begin, i);
			while (!h[begin])
			{
				begin++;
				if (begin >= n)
				{
					cout << sum << endl;
					return 0;
				}
			}
		}
		else
		{
			i++;
		}
	}
	cout << sum << endl;
	return 0;
}
