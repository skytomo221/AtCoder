#include <stdio.h>
#include <stdlib.h>

int n, a[100000], b[100000], j;

int acomp(const void *x, const void *y) {
	if (x != y) return *(int *)x - *(int *)y;
	else return (b[(int)b+(int)a-(int)(int *)x] - *(int *)x) - (b[(int)b+(int)a-(int)(int *)y] - *(int *)y);
}

int main() {
	scanf("%d",&n);
	for(int i=0;i<n;i++) {scanf("%d %d",&a[i], &b[i]);}
	
	qsort(a, sizeof(a) / sizeof(int), sizeof(int), a);
	
	for(int i=0;i<n;i++) {printf("%d %d\n",a[i], b[i]);}

	return 0;
}
