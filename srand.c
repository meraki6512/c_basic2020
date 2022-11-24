#include <stdio.h>
#include <stdlib.h>
int main (void){
	int r,n=1;
	srand(time(NULL));
	while(n<=10)
	{r=rand();
		printf(“%d\n”,r);
	n++;}
	return 0;
}
