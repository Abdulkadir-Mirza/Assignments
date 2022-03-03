#include<stdio.h>

void swap(int i,int j){
int temp;
temp=i;
i=j;
j=temp;
printf("\nFirst variable is %d",i);
printf("\nSecond variable is %d",j);
}
void main(){
int i,j;
printf("Enter 1st number:");
scanf("%d",&i);
printf("Enter 2nd number:");
scanf("%d",&j);
swap(i,j);

}
