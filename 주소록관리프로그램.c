#include <stdio.h>
#include <string.h>
typedef struct {
	char engname[20];
	char email[30];
	char number[15];
} data;

void search_name(data f[]){
	printf("\n-----이름 검색-----\n");
	printf("이름을 입력하세요: ");
	char name[20];
	scanf("%s",name);
	for (int i=0; i<10; i++){
		if (strcmp(name,f[i].engname)==0){
			printf("\n-----연락처 정보-----\n");
			printf("이름: %s\n", f[i].engname);
			printf("이메일: %s\n", f[i].email);
			printf("전화번호: %s\n\n", f[i].number);
			return;
		}
	}
	printf("해당하는 연락처 정보가 없습니다.");
}

void search_all(data f[], int datacnt){
	printf("\n-----연락처 전체 정보-----\n");
	for (int i=0; i<datacnt; i++){
		printf("%d.\n",i);
		printf("이름: %s\n", f[i].engname);
		printf("이메일: %s\n", f[i].email);
		printf("전화번호: %s\n", f[i].number);
	}
}

int main(void){
	data f[10];
	int datacnt = 0;
	printf("\n-----정보 입력-----\n");
	for (int i=0; i<10; i++) {
		printf("친구%d의 정보를 입력하세요.\n",i);
		datacnt++;
		printf("name: ");
		scanf("%s",f[i].engname);
		printf("e-mail: ");
		scanf("%s",f[i].email);
		printf("phone number: ");
		scanf("%s",f[i].number);
		getchar();
		printf("계속 입력하시겠습니까? (y/n) ");
		char yn;
		scanf("%c",&yn);
		printf("\n");
		if ((yn=='N')||(yn=='n'))
			break;
	}
	while(1) {
		printf("\n-----메뉴-----\n1.이름검색\n2.전체검색\n3.종료\n");
		printf("어떤 기능을 사용하시겠습니까? (1/2/3) ");
		int func;
		scanf("%d", &func);
		if (func==1)
			search_name(f);
		else if (func==2)
			search_all(f,datacnt);
		else if (func==3)
			break;
		else
			printf("재입력하세요.\n");
		getchar();
		printf("\n계속 검색하시겠습니까? (y/n) ");
		char yn;
		scanf("%c",&yn);
		if ((yn=='N')||(yn=='n'))
			break;
	}
	printf("\n프로그램을 종료합니다\n");
	return 0;
}
