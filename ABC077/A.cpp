#include <stdio.h>

int main() {
	char str[2][3];
	scanf("%s",str[0]);
	scanf("%s",str[1]);
	if(str[0][0]==str[1][2] && str[0][1]==str[1][1] && str[0][2]==str[1][0]) printf("YES\n");
	else  printf("NO\n");
	return 0;
}
