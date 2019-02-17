#include <bits/stdc++.h>
using namespace std;
int a, b;
int main()
{
	cin >> a >> b;
	cout << ((b % a) ? b - a : a + b) << endl;
	return 0;
}
