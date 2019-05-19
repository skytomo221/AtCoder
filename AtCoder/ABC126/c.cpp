#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main()
{
	double n, k;
	double p, p1 = 1;
	double begin, end;
	p = 0;
	cin >> n >> k;
	while (p1 < k)
		p1 *= 2;
	while (1)
	{
		begin = floor(k / p1);
		end = floor(k / (p1 / 2));
		end = (end < n) ? end : n;
		p += (end - begin) / p1;
		// cout << begin << "~" << end << " " << p << " " << p1 << " p += " << (end - begin) / p1 << endl;
		if (end == n)
			break;
		p1 /= 2;
		if (p1 < 1) {	
			p1 = 1;		
			begin = end;
			end = n + 1;
			p += end - begin;
			// cout << begin << "~" << end << " " << p << " " << p1 << " p += " << (end - begin) / p1 << endl;
			break;
		}
	}
	p /= n;
	printf("%.12lf\n", p);
	return 0;
}
