#include <stdio.h>

int main() {
	int n;
	int m;
	scanf("%d",&n);
	for (m=1;m*m<=n;m++);
	--m;
	printf("%d\n",m*m);
	return 0;
}
