#include <stdio.h>
int main(void){
	char n;
	printf("알파벳 문자를 입력하세요.:");
	scanf("%c",&n);
	n=(int)n;
	if ((56<=n)&&(90>=n))
		printf("변환된 문자는 %c입니다.",n+'a'-'A');
	else
		printf("변환된 문자는 %c입니다.",n+'A'-'a');
	return 0;
}
