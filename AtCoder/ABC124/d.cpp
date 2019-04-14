#include <bits/stdc++.h>
using namespace std;

struct renzoku
{
	int l1b;
	int l1e;
	int r1b;
	int r1e;
	int l0;
	int r0;
	int p;
};

vector<renzoku> rlmake(string s)
{
	vector<renzoku> l;
	renzoku *r = new renzoku;
	int i = 0, j = 0;
	r->l1b = 0;
	while (s[i] == 1 && s.size() < i)
		i++;
	r->l1e = i - 1;
	r->l0 = i;
	while (s[i] == 0 && s.size() < i)
		i++;
	r->r0 = i - 1;
	r->r1b = i;
	while (s[i] == 1 && s.size() < i)
		i++;
	r->r1e = i - 1;
	l.push_back(*r);
	if (s.size() >= i) return l;
	return l;
}

int main()
{
	int n, k;
	string s;
	cout << "test" << endl;
	return 0;
}
