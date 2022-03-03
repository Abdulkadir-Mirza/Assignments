#include<stdio.h>

int main(){
	int num,x;
	printf("Enter a number:");
	scanf("%d",&num);
	for(int i=2; i<=num/2; i++){	
	if(num%i==0){
		x=1;//Non-prime numbers give remainder 0. So we set the flag 0.
		break;
		}	
	}
if(num==0 || num==1)
	printf("Number is neither prime nor composite");	
else	{	
	if(x==1)
	printf("Number is composite");
	else
	printf("Number is prime");
	}
return 0;
}
