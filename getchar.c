#include <stdio.h>
void mygets(char * input){
	int ch, i=0;
	while((ch=getchar())!='\n')
		input[i++]=ch;
	input[i]=0;
}
int main(void)
{
   char input[100];
   printf("문자열을 입력하세요 : ");
   mygets(input);
   printf("입력 문자열 : ");
   puts(input);
   printf("입력 끝");
   return 0;
}
