#include <stdio.h>
typedef union {
	int won;
	float dollar;
} Mtype;
typedef struct {
	char * name;
	_Bool w_d;
	Mtype price;
} product;

int main(){
	const product list[6]={{"PMP",1,{.won=600000}},{"MP3",1,{.won=153000}},{"SmartPhone",0,{.dollar=520.40}},{"TV",0,{.dollar=430.20}},{"Navigator",1,{.won=350000}},{"Laptop",0,{.dollar=1950.00}}};
	int assets, ex_rate;
	
	printf("보유 금액과 환율을 입력하세요\n");
	printf("보유 금액: ");
	scanf("%d",&assets);
	printf("환율: ");
	scanf("%d",&ex_rate);
	float aft_ex = (float)assets/ex_rate;
	
	printf("구매 가능한 제품은 다음과 같습니다\n");
	for (int i=0;i<6;i++){
		if (list[i].w_d){
			if (assets>=list[i].price.won)
				printf("%-10s %d원\n",list[i].name,list[i].price.won);}
		else{
			if (aft_ex>=list[i].price.dollar)
				printf("%-10s %.0f원\n",list[i].name,list[i].price.dollar*ex_rate);}
	}

	return 0;
}
