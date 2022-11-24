#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char * words[10];
	for (int i=0;i<10;i++){
		char word[20];
		printf("단어%d 입력: ",i+1);
		scanf("%s",word);
		words[i]=(char*)malloc(sizeof(char)*(strlen(word)+1));
		strcpy(words[i],word);
	}
	for (int i=0;i<10;i++)
		printf("%s\n",words[i]);
	for (int i=0;i<10;i++)
		free(words[i]);
	return 0;
}
