#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	if (a < b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	if (a == b)
		cout << (a + b) << endl;
	else
		cout << (2 * a - 1) << endl;
	return 0;
}
