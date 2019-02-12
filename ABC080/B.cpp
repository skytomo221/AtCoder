#include <stdio.h>

int nsum(int n) {
	return (n<10)?n:n%10+nsum(n/10);
}

int isHarshad(int n) {
	return (n%nsum(n))?0:1;
}

int main() {
	int h,n;
	scanf("%d",&n);
	if(isHarshad(n)) puts("Yes");
	else puts("No");
	return 0;
}
