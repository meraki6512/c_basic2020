#include <stdio.h>
typedef struct {
	char name[10];
	int ID, age, salary;
}data;

int main(){
	FILE * fp = fopen("employee.txt", "w");
	int i=0;
	data epls;
	printf("<데이터 입력(name ID age salary)>\n");
	while (1){
		if (i++>5){
			int e;
			printf("<정보입력:0, 종료:1> 선택: ");
			scanf("%d",&e);
			if (e==1)
				break;
		}
		scanf("%s %d %d %d", epls.name, &epls.ID, &epls.age, &epls.salary);
		fprintf(fp,"%s %d %d %d\n", epls.name, epls.ID, epls.age, epls.salary);
		fflush(fp);
	};
	fclose(fp);
	return 0;
}

