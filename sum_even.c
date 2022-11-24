#include <stdio.h>
int main(void){
	int sum=0, a=1, n;
	printf("정수입력:");
	scanf("%d",&n);
		if (n>0)
		{while (a<=n)
			{if (a%2==0)  //a가 짝수일 경우만 sum에 a를 더해 sum에 저장
			sum=sum+a; 
			a=a+1;} //a가 짝수인지 홀수인지에 상관없이 1을 더해 저장
		printf("\n1부터 %d까지의 짝수의 합은 %d입니다.",n,sum);}	
	return 0;
}
