#include <stdio.h>
#include <string.h>
int main(){
	char booklist[5][50] = {"Cygwin과 함께 배우는 C 프로그래밍", "C 99", "A book on C", "C 프로그래밍", "자바 프로그래밍"};
	printf("검색 문장을 입력하세요 :");
	char search[50];
	gets(search);
	for (int i=0;i<5;i++){
		char *loca = strstr(booklist[i],search);
		if (loca!=NULL)
			printf("%s\n",booklist[i]);
	}
}
