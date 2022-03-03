#include<stdio.h>
int main(){	
	float profit, sp;
	printf("Input:");	
	scanf("%f",&sp);
	scanf("%f",&profit);
	printf("Cost price of 1 item is:%f",((sp-profit)/15));
}
