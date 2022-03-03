#include<stdio.h>

void addition(int,int);

void main(){
int a,b;
printf("Enter two numbers:");
scanf("%d %d",&a,&b);
addition(a,b);
printf("Thank you");
}

void addition(int x, int y){

printf("Addition of %d and %d is %d\n",x,y,x+y);
}
