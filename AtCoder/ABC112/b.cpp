#include <stdio.h>

int main() {
	int n,t_max,c,t, c_min=10000;
	scanf("%d %d",&n,&t_max);
	for(int i=n-1;i>=0;i--) {
		scanf("%d %d",&c,&t);
		if (t<=t_max && c<=c_min) c_min=c;
	}
	if(c_min!=10000)printf("%d\n",c_min);
	else printf("TLE\n");
	return 0;
}
