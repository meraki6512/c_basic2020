#include <stdio.h>
#include <stdarg.h>

int add(int num, ...){
	int sum = 0;
	va_list ap;
	va_start(ap,num);
	for (int i=0; i<num; i++){
		sum+=va_arg(ap,int);
	}
	va_end(ap);
	return sum;
}


