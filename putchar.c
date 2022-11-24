#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int c, key = atoi(argv[1]);
	while((c=getchar())!=EOF){
        putchar(c^key);
    }
    return 0;
} 
