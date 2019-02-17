#include <stdio.h>

int main() {
	int n, f[100][10], p[100][10], fmax[100]={0}, ximax[100], xmax=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
		for(int j=0;j<10;j++) {
			scanf("%d", &f[i][j]);
			fmax[i]+=f[i][j];
		}
	}
	for(int i=0;i<n;i++) {
		for(int j=0;j<10;j++) {
			scanf("%d", &p[i][j]);
		}
	}
	for(int i=0;i<100;i++) {
		ximax[i]=-10e7-1;
	}
	for(int i=0;i<n;i++) {
		for(int j=0;j<fmax[i];j++) {
			if (p[i][j]>ximax[i]) ximax[i]=p[i][j];
		}
		xmax+=ximax[i];
	}
	printf("%d\n",xmax);
	return 0;
}
