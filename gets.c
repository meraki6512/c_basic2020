#include <stdio.h>
int main(void)
{
   char input[100];
   printf("문자열을 입력하세요 : ");
   gets(input);      // mygets()로 대체
   printf("입력 문자열 : ");
   puts(input);      
   printf(“입력 끝”);
   return 0;
}
