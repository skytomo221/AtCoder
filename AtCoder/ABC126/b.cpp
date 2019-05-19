#include <bits/stdc++.h>
using namespace std;

int is_month(int a) { return 1 <= a && a <= 12; }

int main()
{
	string s;
	cin >> s;
	int a, b;
	a = (s[0] - '0') * 10 + (s[1] - '0');
	b = (s[2] - '0') * 10 + (s[3] - '0');
	if (is_month(a) && is_month(b))
		cout << "AMBIGUOUS" << endl;
	else if (is_month(a))
		cout << "MMYY" << endl;
	else if (is_month(b))
		cout << "YYMM" << endl;
	else
		cout << "NA" << endl;
	return 0;
}
