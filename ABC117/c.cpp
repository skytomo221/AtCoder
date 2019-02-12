#include <iostream>
#include <algorithm>
using namespace	std;

int main() {
	int n,m, x[100000], ni=0;
	cin >> n >> m;
	for(int i=0;i<m;i++) cin>>x[i];
    sort(x,x+m/*, [](const int& x, const int& y) { return x > y;}*/);
	int mmin = x[0];
	if (mmin < 0) {
	for(int i=0;i<m;i++) x[i]-=mmin;
	}
	int max=x[m-1], min=x[0];
	double av =(max-min)/n;
	if (m!=1) {
		int start=x[0], time=0;
//	for(int i=0;i<m;i++) cout<<x[i]<<",";
//			cout<<"av:"<<av<<"\n";
	//	cout<<x[0]<<"-"<<start<<"="<<x[0]-start<<", start+av:"<<start+av<<" time:"<<time<<"\n";
		int mstart=0;
	for(int i=0;i<m;i++) {
		if(x[i]-start>=start+av) {
			ni++;
			time+=x[i-1]-x[mstart];
			mstart=i;
			start=x[0]+av*ni;
		}
	//	cout<<x[i]<<"-"<<start<<"="<<x[i]-start<<", start+av:"<<start+av<<" time:"<<time<<"\n";
	}
	time+=x[m-1]-x[mstart];
cout<<time<<"\n";
}else if(m==1) {cout <<"0\n";}
else {cout << max-min << "\n";}
    return 0;
}
