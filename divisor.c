int divisor(int a){
	for (int k=1;k<=a;k++)
		if (a%k==0)
			printf("%d ",k);
	printf("\n");
}
