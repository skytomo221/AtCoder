#include <stdio.h>

int sum(int n) {
	return (n==0)?0:sum(n/10)+n%10;
}

int main() {
	int k;
	int mn, ms;
	
	scanf("%d",&k);
	mn=ms=k;
	for(int i=2*k;;i+=k) {
		if (ms==sum(i)) break;
		if (ms>sum(i)) {
			ms=sum(i);
			mn=i;
		}
	}
	printf("%d\n",mn);
	printf("%d\n",ms);
	return 0;
}
