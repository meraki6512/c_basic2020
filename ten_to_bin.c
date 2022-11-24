
void re_bin_num(int n)
{	if (n>=0){
	if (n==1)
		printf("0 ");
	if(n!=1 && n!=0)
		re_bin_num(n/2);
	printf("%d ",n%2);}
}

