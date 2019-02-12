#include <stdio.h>

int main() {
	int q;
	int a = 0;
	for (int i=0;i<4;i++) {
		scanf("%d", &q);
		switch(q) {
			case 1: a += 1; break;
			case 9: a += 2; break;
			case 7: a+=4; break;
			case 4: a+=8;break;
		}
	}
	printf("%s\n",(a==15)?"YES":"NO");
	return 0;
}
