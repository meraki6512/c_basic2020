#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (void){
	int a,r;
	char yn;
	srand(time(NULL));
	do
	{printf("\n추천 로또 번호는");
	for (a=1;a<=6;a++)
	{r=rand()%45+1;
		printf(" %d ",r);}
	printf("다시 생성할까요? (y/n) ");
	yn=getchar();
	getchar();} while (yn=='y');
	return 0;
}

