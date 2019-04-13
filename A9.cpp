/*
題目:作業09: 兩光法師時常替人占卜，由於他算得又快有便宜，
因此生意源源不絕，時常大排長龍，
他想算得更快一點，因此找了你這位
電腦高手幫他用電腦來加快算命的速度。
他的占卜規則很簡單，規則是這樣的，
輸入一個日期，然後依照下面的公式：
製作:呂家明 
修改/完成日期:2019/4/7 
*/ 

#include<stdio.h>
#include<stdlib.h>

void is_fortunate(int,int,int);//副函式原型 

int main(void){
	int born_year,born_month,born_day;//建立int變數儲存出生年、月、日 
	
	printf("請輸入出生日期:");
	scanf("%d%d%d",&born_year,&born_month,&born_day);
	
	is_fortunate(born_year,born_month,born_day);//副函式 is_fortunate顯示運氣 
	
	return 0;
	system("pause");
}
void is_fortunate(int year,int month,int day){
	int result;
	
	result=(month*2+day)%3;
	
	switch(result){
		
		case 0:
			printf("普通");
			break;
		case 1:
			printf("吉");
			break;
		case 2:
			printf("大吉");
			break;
			
	}
}
