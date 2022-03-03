#include<stdio.h>
int nadd(int i, int j){
int sum=0;
for(i;i<=j;i++)
sum+=i;
return sum;
}


void main(){
int n,sum;
printf("Enter n:");
scanf("%d",&n);
sum=nadd(1,n);
printf("Sum of first %d numbers is %d",n,sum);
}
