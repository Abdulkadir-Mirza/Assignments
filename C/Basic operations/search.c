#include<stdio.h>
int main(){

int a[10] ={5,3,8,9,7,1,2,3,4,5};
int num,flag;
printf("Enter the number you want to search from the array:");
scanf("%d",&num);
for(int i=0;i<10; i++){
if(a[i]==num)
	{printf("\n%d is present at index %d\n",num,i);
	flag=1;}
}
if(flag!=1)
printf("Element does not exist in array");
return 0;
}
