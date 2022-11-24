char up_down_case(char a)
{	char k;
	if (a<=‘Z’)
		k=a+'a'-'A';
	else if (a>=’a’)
		k=a+'A'-'a';
	return k;
}	
