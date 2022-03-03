#include<stdio.h>

int main(){
int a=10, *p, **q;
p=&a;
q=&p;
printf("%d %d %d",a,*p,**q);
printf("\nAddress of a is %p\n",p);
printf("Address of p is %p\n",q);

return 0;
}
