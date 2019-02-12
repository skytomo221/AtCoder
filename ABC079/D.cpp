#include <stdio.h>
#include <math.h>


int main() {
	int h, w;
	int i,j;
	int c[9][9];
	
	scanf("%d %d", &h, &w);
	for (i=0;i<9;i++) {
		for (j=0;j<9;j++) {
			scanf("%d", &c[i][j]);
		}
	}
	
	return 0;
}
