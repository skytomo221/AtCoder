#include <stdio.h>

int main() {
	int n,a,b;
	scanf("%d %d %d",&n,&a,&b);
	printf("%d %d\n",a<b?a:b, (a+b-n)>0?(a+b-n):0);
	return 0;
}
