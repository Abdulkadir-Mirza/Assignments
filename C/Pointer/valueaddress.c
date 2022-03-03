#include<stdio.h>
int main(){
int a=10, *ptr;
ptr=&a;
printf("Value of a is: %d\n",*ptr);
printf("Address of a is: %p",ptr);
return 0;
}
