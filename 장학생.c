struct info{
  char name[20];		// 이름
  double score;		// 평점 평균
  int credit;		// 취득 학점
};

int main(void)
{
  struct info students[5]; 	// 5명의 학생
  input_data(students, 5); 	// 이름, 평점 평균, 취득 학점을 입력받는 함수
  scholarship(students, 5);	// 장학생의 이름, 평점 평균, 취득 학점을 출력하는 함수
  return 0;
}

void input_data(struct info students[], int num){
	printf("\n<정보입력>\n");
	for (int i=0; i<num; i++){
		printf("%d.\n이름: ",i);
		scanf("%s",students[i].name);
		getchar();
		printf("평점 평균: ");
		scanf("%lf",&students[i].score);
		getchar();
		printf("취득 학점: ");
		scanf("%d",&students[i].credit);
		getchar();
	}
}

void scholarship(struct info students[], int num){
	printf("\n<장학생 정보>");
	for (int i=0; i<num; i++){
		if ((students[i].credit >= 20)&&(students[i].score >= 4.3)){
			printf("\n%s\n",students[i].name);
			printf("%.1lf\n",students[i].score);
			printf("%d\n",students[i].credit);
		}
	}
}
