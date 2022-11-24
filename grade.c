#include <stdio.h>
int main(){
	int grade[5], sum=0, tmp;
	double avr;
		printf("성적을 입력하세요 :");
	for (int i=0;i<5;i++)
		scanf("%d",&grade[i]);
	for (int k=0;k<4;k++){
	for (int i=1;i<5;i++){
	if (grade[i-1]<grade[i]){
		tmp=grade[i-1];
		grade[i-1]=grade[i];
		grade[i]=tmp;}}}
	for (int i=1;i<=5;i++)
		printf("%d	%d점\n",i,grade[i-1]);
		for (int i=0;i<5;i++)
		sum+=grade[i];
	avr=(double)sum/5;
	printf("전체 평균: %.1f점\n",avr);
}
