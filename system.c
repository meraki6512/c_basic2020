int main(void){
	printf("몇 초 후에 화면을 지울까요? : ");
	char ch = getch();
	int sec = atoi(&ch);
	printf("%d\n",sec);
	sleep(sec);
	system("clear");
	return 0;
}
