int is_prime(int n){
	int a=0, rt;
	for (int k=n;k>1;k--)
		if (n%k==0)
			a++;
	if (a==1)
		rt=1;
	else
		rt=0;
	return rt;
}
