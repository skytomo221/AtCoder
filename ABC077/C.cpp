#include <stdio.h>
#include <stdlib.h>

int *a, *b, *c;
int count;
void bs(int,int);
void cs(int,int);

void as(int n) {
	for (int i=0;i<n;i++) {
		if (a[i] > b[0]) return;
		bs(a[i], n);
	}
}

void bs(int a, int n) {
	for (int i=0;i<n;i++) {
		if (b[i] > a) cs(b[i], n);
		else return;
	}
}

void cs(int b, int n) {
	for (int i=0;i<n;i++) {
		if(c[i] > b) count++;
		else return;
	}
}


int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int un_compare_int(const void *a, const void *b)
{
    return *(int*)b - *(int*)a;
}


int main() {
	int n;
	scanf("%d",&n);
	a=(int *)calloc(n,sizeof(int));
	b=(int *)calloc(n,sizeof(int));
	c=(int *)calloc(n,sizeof(int));
	for (int i=0;i<n;i++) scanf("%d",&a[i]);
	for (int i=0;i<n;i++) scanf("%d",&b[i]);
	for (int i=0;i<n;i++) scanf("%d",&c[i]);
	qsort(a, n, sizeof(int), compare_int);
	qsort(b, n, sizeof(int), un_compare_int);
	qsort(c, n, sizeof(int), un_compare_int);
	as(n);
	printf("%d\n",count);
	return 0;
}
