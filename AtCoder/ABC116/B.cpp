#include <stdio.h>
#include <math.h>

int main() {
	int s;
	int n[1000000], i, j;
	scanf("%d",&s);
	n[0]=s;
	for(i=0;;i++) {
		n[i+1]=(n[i]%2==0)?n[i]/2:3*n[i]+1;
		//printf("%d ",n[i]);
		for(j=0;j<i;j++) {
			if (n[j]==n[i]) {
				printf("%d\n",i+1);
				return 0;
			}
		}
	}
	return 0;
}
