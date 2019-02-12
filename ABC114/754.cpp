#include <stdio.h>
#include <string.h>
#include <math.h>
int toint(char a) {return a-'0';}
int main() {
	char a[11];
	int l,i,n,min=1000,minx;
	scanf("%s",a);
	l=strlen(a);
	for (i=0;i<l-2;i++) {
		n = toint(a[i])*100 + 
		toint(a[i+1])*10 + 
		toint(a[i+2]);
		if (min>abs(n-753)) {minx=n;min=abs(n-753);}
	}
	printf("%d\n",min);
	return 0;
}
