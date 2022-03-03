#include<stdio.h>

void main(){
	int sal;
	float gross;
	printf("Input:");
	scanf("%d",&sal);
	gross =(1+0.4+0.2)*sal;
	printf("Output:\n");
	printf("%f",gross);
}
