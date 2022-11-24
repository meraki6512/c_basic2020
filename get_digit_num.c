#include <stdio.h>
int main(void){
	int a;
	printf("3자리 정수를 입력하세요 :");
	scanf("%d",&a);
	printf("백의 자리 숫자 : %d\n일의 자리 숫자 : %d\n",a/100,a%10);
	return 0;
}
