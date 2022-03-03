#include<stdio.h>
int main(){

int a[10] ={3,5,6,8,9,6,7,8,9,2};
int min=a[0];
for(int i=0;i<10; i++){
if(a[i]<min)
	min = a[i];
}
printf("Minimum is: %d",min);
return 0;
}
