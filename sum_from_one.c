int r_sum(int num)
{
	static int sum=0;
	if (num>0)
	{sum+=num;
	r_sum(num-1);}
	return sum;
}

