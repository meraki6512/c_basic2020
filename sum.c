#include <stdio.h>
int main(void){
	int sum=0, a=1, n; //각 변수를 정수형으로 정하고 sum과 a에는 각각 0,1을 저장
	printf("정수입력:");
	scanf("%d",&n);
		if (n>0) //n이 양수일 경우에만 실행
		{while (a<=n) //a가 n보다 작거나 같아질 때까지
			{sum=sum+a; //sum에 sum+a의 값을 저장
			a=a+1;}
		printf("1부터 %d까지의 합은 %d입니다.",n,sum);}	
	return 0;
}

