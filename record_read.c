#include <stdio.h>
#include <stdlib.h>
typedef struct {
	char name[20];
	int ID, age, salary;
} staff;
int main(int argc, char **argv){
	FILE *infp;
	staff s={"",0,0,0};
	if (argc!=2){
		fprintf(stderr,"실행 오류\n");
		exit(1);
	}
	if ((infp=fopen(argv[1],"rb"))==NULL){
		fprintf(stderr,"오류: %s 파일을 열 수 없습니다.\n", argv[1]);
		exit(1);
	}
	int i=1, check = fread (&s,sizeof(staff),1,infp);
	while (check){
		printf("%d번째 직원: %s %d %d %d\n",i++,s.name,s.ID,s.age,s.salary);
		check = fread (&s,sizeof(staff),1,infp);
	}
	fclose(infp);
	return 0;
}
