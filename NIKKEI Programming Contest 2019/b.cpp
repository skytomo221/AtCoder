#include <stdio.h>

int main() {
	int n, cnt = 0;
	char a[100], b[100], c[100];
	scanf("%d",&n);
	scanf("%s",a);
	scanf("%s",b);
	scanf("%s",c);
	
	for(int i=0;i<n;i++) {
		if (a[i]==b[i] && a[i]==c[i]) continue;
		if (a[i]==b[i] && a[i]!=c[i]) {cnt++;continue;}
		if (a[i]!=b[i] && a[i]==c[i]) {cnt++;continue;}
		if (a[i]!=b[i] && b[i]==c[i]) {cnt++;continue;}
		cnt+=2;
	}
	
	printf("%d\n",cnt);
	return 0;
}
