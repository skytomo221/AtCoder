#include <stdio.h>

int main() {
	int n, a, b, sum;
	scanf("%d %d %d", &n, &a, &b);
	sum=(n*a>b)?b:n*a;
	printf("%d\n",sum);
	return 0;
}
