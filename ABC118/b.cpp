#include <iostream>

using namespace std;

int n,m,k,l[30];
int x;
int main() {
	cin >> n >> m;
	for(int i=0;i<n;i++) {
		cin >> k;
		for(int j=0;j<k;j++) {
			cin >> x;
			l[x-1]++;
		}
	}
	int cnt=0;
	for(int i=0;i<m;i++) {
		if(l[i]==n)cnt++;
	}
	cout << cnt << endl;
	return 0;
}
