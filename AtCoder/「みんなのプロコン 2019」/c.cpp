#include <stdio.h>
#include <iostream>

using namespace std;

long long k,a,b;
long long int bis=1, mon=0;

void p(){cout <<"K:"<<k<<" B:" << bis << " M:"<<mon << endl;}

int main() {
	cin >> k>>a>>b;
	long long kk=k;
	if(a>=b){
		cout<<1+k<<endl;return 0;
	}
	if(k<a){
		cout<<1+k<<endl;return 0;
	}
	k-=a;bis=0;mon=1;
//	p();
	if(k%2==1){
		bis=(b-a)*(k/2)+b;
	}
	if(k%2==0) {
		bis=(b-a)*(k/2)+a+1;
	}
	if(bis<kk+1)bis=kk+1;
//	cout << bis<<" "  << k<<endl;
	cout<<bis<<endl;return 0;
}
