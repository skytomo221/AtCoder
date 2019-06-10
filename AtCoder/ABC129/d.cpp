#include <bits/stdc++.h>
using namespace std;

int main()
{
	int h, w, hmax = 0, wmax = 0;
	cin >> h >> w;
	vector<string> s;
	s.resize(h);
	for (int i = 0; i < h; i++)
	{
		cin >> s[i];
	}
	for (int i = 0; i < h; i++)
	{
		int cnt = 0;
		for (int j = 0; j < w; j++)
		{
			switch (s[i][j])
			{
			case '.':
				cnt++;
				break;
			case '#':
				if (wmax < cnt)
					wmax = cnt;
				cnt = 0;
				break;
			}
		}
		if (wmax < cnt)
			wmax = cnt;
	}
	for (int j = 0; j < w; j++)
	{
		int cnt = 0;
		for (int i = 0; i < h; i++)
		{
			switch (s[i][j])
			{
			case '.':
				cnt++;
				break;
			case '#':
				if (hmax < cnt)
					hmax = cnt;
				cnt = 0;
				break;
			}
		}
		if (hmax < cnt)
			hmax = cnt;
	}
	// cout << hmax << " " << wmax << endl;
	cout << hmax + wmax - 1 << endl;
	return 0;
}
