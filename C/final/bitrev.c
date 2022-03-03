#include<stdio.h>
#include<math.h>

int main()
{
unsigned int num;
int j=0;
int x[8];
//Taking input from User
printf("Enter a number:");
scanf("%d",&num);
//Converting into 8-bit binary array.
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

for(int i=0;i<8;i++)
	{
	if(x[i]!=1)
	x[i]=0;
	}

printf("\nBefore: ");
for(int i=0;i<8;i++)
	{
	printf("%d ",x[i]);
	}

printf("\nAfter:  ");
for(int i=7;i>=0;i--)
	{
	printf("%d ",x[i]);
	}

//We have to use -lm after gcc command otherwise it will give undefined reference to pow; 
//i.e. "gcc setB_3.c -lm" and then execute it.
return 0;

}
