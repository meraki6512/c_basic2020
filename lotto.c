#include <stdio.h>
int main(){
	int lo[5][6]={1,2,3,4,5,6,10,15,25,35,40,42,1,9,11,22,23,25,9,28,31,34,35,36,1,9,23,28,33,35};
	int hg[6], tmp, bonus, bp=0,point=0;
	
	
	printf("금주의 로또 번호를 입력하세요 ->");
	scanf(" %d %d %d %d %d %d",&hg[0],&hg[1],&hg[2],&hg[3],&hg[4],&hg[5]);
	printf("보너스 번호를 입력하세요 ->");
	scanf(" %d",&bonus);
	printf("\n홍길동님의 로또 당첨 결과는 다음과 같습니다.\n\n");


	for (int m=0;m<5;m++){
		for (int n=1;n<6;n++){
			if (hg[n-1]>hg[n]){
				tmp=hg[n-1];
				hg[n-1]=hg[n];
				hg[n]=tmp;}}}
	
	
	for (int p=0;p<5;p++){
		printf("%d세트 번호<",p+1);
		for (int k=0;k<6;k++){
			printf("%d ",lo[p][k]);}
		printf("\b> ->");

		for (int a=0;a<6;a++){
			int no=0;	
			if (lo[p][a]==bonus)
				bp++;
        	for (int b=0;b<6;b++){
            	if (lo[p][a]==hg[b]){
                	printf(" %d",hg[b]);
                	point++;
					continue;}
				else
					no++;}
			if ((no==6)&&(!(bp==1&&point==5))){
				printf(" X");}
         if (bp==1){
              if (point==5){
        		  printf(" %d",bonus);}}}


		if (point<3)
			printf(" <꽝>");
		else if (point==3)
			printf(" <5등>");
		else if (point==4)
			printf(" <4등>");
		else if (point==5){
			if (bp==0)
				printf(" <3등>");
			else if (bp==1)
				printf(" <2등>");}
		else if (point==6)
			printf(" <1등>");
		bp=0;
		point=0;
		printf("\n");}
	printf("\n");
}
