#include <stdio.h>
#include <time.h>

int fbnc_r(int n){
	if (n<2)
		return n;
	else if (n>=2)
		return (fbnc_r(n-1)+fbnc_r(n-2));}

long int call(int p){
	if (p<2)
		return 1;
	else if (p>=2)
		return (call(p-1)+call(p-2)+1);}

int fbnc_rX(int k){
	int i,a=0,b=1,c;
	if (k<2)
		return k;
	for (i=2;i<=k;i++){
		c=a+b;
		a=b;
		b=c;}
	return c;}

int main()
{
	clock_t st, ed, df;
		st=clock();
	printf("재귀피보나치 수: %d\n",fbnc_r(44));
	ed=clock();
	df=ed-st;
	printf("클락 수 : %ld\n\n",df);
	printf("재귀함수 호출 수: %ld\n",call(44));
	st=clock();
	printf("\n반복피보나치 수: %d\n",fbnc_rX(44));
	ed=clock();
	df=ed-st;
	printf("클락 수 : %ld\n",df);
}

