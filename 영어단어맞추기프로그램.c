#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define P_N 16

//0의 위치를 찾는 함수
int locate_(int *data){
	int count=0, i=0;
	while(data[i]!=0){
		count++;
		i++;
	}
	return count;
}

//데이터를 섞는 함수 (모드 2)
void mix(int *data){
	srand(time(NULL));
	int temp, random;
	for (int i=0;i<P_N-1;i++){
		random = rand()%(P_N-i)+1;
		temp=data[i];
		data[i]=data[random];
		data[random]=temp;
	}
}

//데이터를 출력하는 함수
void print(int *data){
	int zero = locate_(data);
	printf("\n\n\n\n\n\t\t");
	for (int i=0;i<P_N;i++){
		if ((i==4)||(i==8)||(i==12))
			printf("\n\t\t");
		if (i==zero){
			printf("\t ");
			continue;
		}
		printf("\t%-d ",data[i]);
	}
	printf("\n");
}

//퍼즐을 이동하는 함수
int move(int *data, char *mv){
	int l=locate_(data), change, temp;
	system("clear");
	if (strcmp(mv,"i")==0){
		if (l>=12){
			printf("이동 불가: 재입력하세요.\n");
			return 0;
		}
		change=l+4;
	}
	else if (strcmp(mv,"j")==0){
		if ((l==3)||(l==7)||(l==11)||(l==15)){
			printf("이동 불가: 재입력하세요.\n");
			return 0;
		}
		change=l+1;
	}
	else if (strcmp(mv,"k")==0){
		if (l<=3){
			printf("이동 불가: 재입력하세요.\n");
			return 0;
		}
		change=l-4;
	}
	else if (strcmp(mv,"l")==0){
		if ((l==0)||(l==4)||(l==8)||(l==12)){
			printf("이동 불가: 재입력하세요.\n");
			return 0;
		}
		change=l-1;
	}
	else{
		printf("이동키 오류: 재입력하세요.\n");
		return 0;
	}
	temp=data[l];
	data[l]=data[change];
	data[change]=temp;
	return 1;
}

//퍼즐 맞추기 함수
void puzzle(int *data){
	int try;
	while (1) {
		int success=0;
		for(int i=0;i<15;i++){
			if (data[i]==i+1)
				success++;
		}
		if ((success==15)&&(try==1)){
			printf("성공! 축하합니다.\n");
			break;
		}
		printf("\n\n\n이동키 입력(i(위), j(왼쪽), k(아래), l(오른쪽), esc(종료)):");
		char choice[5];
		scanf("%s",choice);
		if (strcmp(choice,"esc")==0)
			break;
		try = move(data,choice);
		print(data);
	}
}

//메인 함수
int main(int argc, char*argv[]){
	int data[P_N]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,0};
	if (argc==1)
	   printf("퍼즐 생성 모드를 선택하여 실행하세요.(1:순차,2:랜덤)\n");	
	else if(*argv[1]=='1'){ //순차
		system("clear");
		print(data);
		puzzle(data);
	}
	else if (*argv[1]=='2'){ //랜덤
		mix(data);
		print(data);
		puzzle(data);
	}
	else
		printf("퍼즐 생성 모드를 다시 입력하세요.(1:순차,2:랜덤)\n");
	printf("3초 뒤 프로그램을 종료합니다.\n");
	sleep(3);
	return 0;
}
