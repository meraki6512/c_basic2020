/*
int power(int n, int m){
	int i;
	int pow = 1;
	for (i = 0; i<m; ++i){
		pow*=n;
	}
	return pow;
}

int main (void)
{ 	for(int k=1;k<=20;k++)
		printf("2^%d=%d\n",k,power(2,k));
	return 0;
}
*/

/* 음수일 때 문제 생김 
   -> 수정 후 */

#include <stdio.h>
float power(float n, int m)
{
	int i;
	float pow=1;
	if (m>0)
	{for (i=0;i<m;++i)
		pow*=n;}
	else if (m<0)
	{for (i=0;i>m;--i)
		pow/=n;}
	return pow;
}
int main ()
{
	for (int k=-1;k>=-10;--k)
		printf("2^%d=%f\n",k,power(2,k));
	return 0;
}

