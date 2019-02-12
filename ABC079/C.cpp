#include <stdio.h>

char str[5];
char sign[3];

int op3(int n) {
	if (n+str[3]==7) {sign[2]='+'; return 1;}
	if (n-str[3]==7) {sign[2]='-'; return 1;}
	return 0;
}

int op2(int n) {
	if (op3(n+str[2])) {sign[1]='+'; return 1;}
	if (op3(n-str[2])) {sign[1]='-'; return 1;}
	return 0;
}

int op1() {
	if (op2(str[0]+str[1])) {sign[0]='+'; return 1;}
	if (op2(str[0]-str[1])) {sign[0]='-'; return 1;}
	return 0;
}

int main() {
	scanf("%s",str);
	str[0]-='0';
	str[1]-='0';
	str[2]-='0';
	str[3]-='0';
	
	op1();
	
	printf("%d%c%d%c%d%c%d=7\n",str[0],sign[0],str[1],sign[1],str[2],sign[2],str[3]);
	return 0;
}
