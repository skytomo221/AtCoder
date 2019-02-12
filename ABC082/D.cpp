#include <stdio.h>

int main() {
	char s[8001]={0};
	int i;
	int x=0, y=0;
	int go[4][2] = {{0,1},{-1,0},{0,-1},{1,0}};
	int toward=0;
	int gx, gy;
	scanf("%s",s);
	scanf("%d %d",&gx,&gy);
	puts("ok");
	for(i=0;s[i]!=0;i++) {
		printf("%d %d\n",x,y);
		switch (s[i]) {
			case 'F':
			x+=go[toward][0];
			y+=go[toward][1];
			break;
			case 'T':
			toward=(toward+1)%4;
			break;
		}
	}
	if(gx==x && gy==y) printf("Yes\n");
	else printf("No\n");
	return 0;
}
