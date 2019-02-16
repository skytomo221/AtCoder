#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

int n, x, m = INT_MAX, gcd_;

int gcd(int a, int b) {
  while(1) {
    if(a < b) swap(a, b);
    if(!b) break;
    a %= b;
  }
  return a;
}

int main() {
	int whe;
	cin >> n;
	vector<int> a;
	for (int i=0;i<n;i++) {cin >> x; a.push_back(x);}
	sort(a.begin(), a.end());
	a.erase(unique(a.begin(), a.end()), a.end());
	if (a[0]==1) {cout<<"1"<<endl;return 0;}
	gcd_=gcd(a[0],a[1]); for (int i=0;i<n;i++) gcd_=gcd(a[i],gcd_);
	if (gcd_!=1) {cout<<gcd_<<endl;return 0;}
	// hikizan
	for (int i=0;i<n;i++) for (int j=0;j<i;j++) {if(a[i]!=a[j]) a.push_back(a[i]-a[j]);if(a[i]-a[j]==1) {cout<<"1"<<endl;return 0;}}
	sort(a.begin(), a.end());
	a.erase(unique(a.begin(), a.end()), a.end());
	for (int i=0;i<n;i++) for (int j=0;j<i;j++) {if (a[i]%a[j]==0) a.erase(a.begin() + i);}
	//for (int i=0;i<n;i++) cout << a[i] <<", ";cout << endl;
	for (int i=0;i<a.size();i++) for (int j=0;j<i;j++) {
		//cout << a[i] << " % " << a[j] << " = " << (a[i]%a[j]) << endl;
		if(a[i]%a[j]>0 && m>a[i]%a[j]) m=a[i]%a[j];
		if (m==1) {cout<<"1"<<endl;return 0;}
	}
	if(m==INT_MAX) m=a[0];
	cout << m << endl;
	return 0;
}
