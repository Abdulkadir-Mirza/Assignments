#include<stdio.h>
#include<math.h>

void main(){
unsigned int num;
int j=0;
int x[8];
printf("Enter a number:");
scanf("%d",&num);
for(int i=7;i>=0;i--){
	if(num>=pow(2,i))
	{
	num=num-pow(2,i);
	x[j]=1;
	j++;
	}
	else
	j++;
}

for(int i=0;i<8;i++){
if(x[i]!=1)
x[i]=0;
}

printf("Before:");
for(int i=0;i<8;i++){
printf("%d ",x[i]);
}
printf("\nAfter: ");
for(int i=7;i>=0;i--){
printf("%d ",x[i]);
}



}
