#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main(){
int x,y;
int level=1;
printf("Hi Young soul, lets have a fun in Maths exercise:\n");
printf("Lets start with level %d",level);
do{	
	srand(time(0));
	int xy = pow (10,level);	
	x=1+rand()%xy;
	y=1+rand()%xy;
	int chance=5,sum=x+y,ans;
	printf("\nLevel %d",level);
	printf("\nWhat is %d + %d: ",x,y);
	do{
		chance--;	
		printf("\nEnter your answer:");
		scanf("%d",&ans);
		if(sum==ans){
			printf("Great, %d + %d is %d",x,y,sum);
			level++;
			break;
			}
		else{
			printf("Oops,wrong answer\n");
			if(chance>0)
				printf("Try again");
			else
				printf("Brush up your adiition skills and come back stronger...");
			}
	}while(chance>0);
}while(level!=3);
printf("\nYou could complete till level %d;\nWe are still developing, do come back to have more fun...",level-1);

return 0;
}
