#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int ans = 0;
	bool flag = false;
	cin >> s;
	for (int i = 0; i < s.size(); i++, flag = !flag)
	{
		if (((flag) ? 0 : 1) == s[i] - '0')
			ans++;
	}
	ans = (ans < s.size() - ans) ? ans : s.size() - ans;
	cout << ans << endl;
	return 0;
}
