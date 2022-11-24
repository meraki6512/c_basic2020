#include <stdio.h>
float my_cal(char,float,float);
int main(){
	char x;
	float a,b;
	printf("연산자를 입력하세요 :");
	scanf("%c",&x);
	printf("두 개의 숫자를 입력하세요 :");
	scanf("%f%f",&a,&b);
	printf("결과값은 %.2f입니다.\n",my_cal(x,a,b));
}float my_cal(char x, float a, float b){
	float r;
	if (x=='+')
		r=a+b;
	else if (x=='-')
		r=a-b;
	else if (x=='*')
		r=a*b;
	else if (x=='/')
		r=a/b;
	return r;
}
