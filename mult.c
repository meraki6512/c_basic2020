#include <stdio.h>
int main(){
	int n,i;
	printf("구구단/ 2~9사이의 정수 입력:");
	scanf("%d",&n);
	for (;n<=9;n++)
	{for (i=1;i<=9;i++)
			printf("%d*%d=%d\n",n,i,n*i);
	printf("\n");}
	return 0;
}
