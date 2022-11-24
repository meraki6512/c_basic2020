
#include <stdio.h>
int main(){
	char *fruit = "strawberry";
	int i=0;
	while((*(fruit+i))!=0){
		printf("%c\n",(*(fruit+i)));
		i+=2;
	}
	return 0;
}

