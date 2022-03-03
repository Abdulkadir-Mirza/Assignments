#include<stdio.h>
int main(){
int a=10,b=20;
printf("Value of A is: %d and Value of B is: %d\n",a,b);
int *p,*q;
p=&a;
q=&b;
int temp;
temp = *p;
*p = *q;
*q = temp;
printf("Value of A is: %d and Value of B is: %d",a,b);

return 0;
}
