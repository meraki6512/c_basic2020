#include <stdio.h>
int main (void){
	int s,h,a,b;
	printf("사각형의 너비를 입력하세요:");
	scanf("%d",&s);
	printf("사각형의 높이를 입력하세요:");
	scanf("%d",&h);
	for (a=1;a<=h;a++)
	{for (b=1;b<=s;b++)
			printf("%c",'#');
		printf("\n");}
	return 0;
}
