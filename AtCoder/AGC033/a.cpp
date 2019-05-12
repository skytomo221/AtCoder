#include <bits/stdc++.h>
using namespace std;

int main()
{
	int h, w, max = 10000, max_min;
	vector<vector<char>> v;
	stack<pair<int, int>> s;
    cin >> h >> w;
    v.resize(h);
    for(int i = 0; i < h; i++)
    {
        v[i].resize(w);
    }
    for(int i = 0; i < h; i++)
    {
        for(int j = 0; j < w; j++)
        {
            cin >> v[i][j];
        }
    }
    for(int i = 0; i < h; i++)
    {
        for(int j = 0; j < w; j++)
        {
            if(v[i][j] == '#') 
            {
                pair<int, int> p;
                p.first = i;
                p.second = j;
                s.push(p);
                while(!s.empty()) {
                    s.pop();
                }                
            }
        }
    }
	cout << "test" << endl;
	return 0;
}
