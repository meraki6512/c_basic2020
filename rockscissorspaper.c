#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	char s;
	int r;

	printf("가위(X) 바위(O) 보(#) 게임을 시작합니다.(게임종료 : 9)\n");
	
	while(1)
	{printf("\n가위 바위 보를 선택하세요 : ");
	scanf("%c",&s);
	getchar();
		if (s=='9')
		{printf("다음에 또 만나요.\n");
		break;}
		else{
	srand(time(NULL));

	while (1) 
	{r=rand()%54+35;
	if ((r==35)||(r==79)||(r==88))
	break;}
	printf("당신은 %c를 냈고 컴퓨터는 %c를 냈습니다.\n",s,r);
	
	if (s==(char)r)
	printf("당신과 컴퓨터가 비겼습니다.\n");
	else if (((r==88)&&(s=='#'))||((r==79)&&(s=='X'))||((r==35)&&(s=='O')))
		printf("컴퓨터가 이겼습니다.\n");
	else
		printf("당신이 이겼습니다.\n");}}
	return 0;
}
