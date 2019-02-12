#include <stdio.h>
#include <stdlib.h>

int n;
int a[100000];
int checked[100000];

int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int cntn(int m) {
	int i=0, cnt=0;
	if (a[i]!=m) i++;
	for(;i<n && a[i]!=m;i++) {
		cnt++;
	}
	return cnt+1;
}

int main() {
	int i, j=0, deleten=0;
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	qsort(a, n, sizeof(int), compare_int);
	for(i=0;i<n;i++) {
		if (a[i]==cntn(a[i])) puts("ok");
		else if (a[i]*2 < cntn(a[i])){
			deleten += cntn(a[i]);
		} else deleten += cntn(a[i])-a[i];
		i+=cntn(a[i])-1;
	printf("%d\n",cntn(a[i]));
	}
	printf("%d\n",deleten);
	for(i=0;i<n;i++) printf("%d ",a[i]);
	return 0;
}
