#include<stdio.h>
int main(){
int a=10,b=20;
printf("Value of A is: %d and Value of B is: %d\n",a,b);
int *p,*q;
p=&a;
q=&b;

printf("Sum of A and B is: %d",*p+*q);

return 0;
}
