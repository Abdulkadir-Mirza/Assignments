#include<stdio.h>
#include<stdlib.h>


void main(){
int *fp,n,m,i;
printf("How many employees:");
scanf("%d",&n);
fp=(int *)calloc(n,sizeof(int));
printf("\nEnter Employees age:");
for(i=0;i<n;i++){
	scanf("%d",&fp[i]);
}
printf("\nDo you want to add More employees age,if yes enter numbers to add o/w enter 0:");
scanf("%d",&m);
if(m>0){
fp=(int *)realloc(fp,sizeof(int)*(n+m));
printf("\nEnter Employees age:");
for(i=n;i<m+n;i++){
	scanf("%d",&fp[i]);
}

}
for(i=0;i<m+n;i++){
	printf("%d\t",*fp+i);
}
}
