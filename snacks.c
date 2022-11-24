#include <stdio.h>
int main(){
	int pr, is,lf;	
	printf("과자 가격을 입력하세요 :");
	scanf("%d",&pr);
	printf("투입액을 입력하세요 :");
	scanf("%d", &is);
	lf=is-pr;
	printf("거스름돈은 500원짜리 %d개, 100원짜리 %d개, 50원짜리 %d개입니다.", lf/500, (lf%500)/100, ((lf%500)%100)/50);
	return 0;
}
