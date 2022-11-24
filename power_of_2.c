unsigned long long power_of_2(int n)
{
	static int rs=1;
	if (n>0){
	rs*=2;
	power_of_2(n-1);}
	return rs;
}
