#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int po(int b,int e){
		int res=1;
		for(e;e>0;e--){
		res=res*b;
		}
		return res;
		}
int main(){
int x,y;
int level=1;
printf("Hi Young soul, lets have a fun in Maths exercise:\n");
printf("Lets start with level %d",level);
do{	
	srand(time(0));
	int tens = po(10,level);	
	x=1+rand()%tens;
	y=1+rand()%tens;
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
			else{
				printf("Brush up your adiition skills and come back stronger...");
				break;}
			}
	}while(chance>0);
if(chance==0)
break;
}while(level!=4);
printf("\nYou could complete till level %d;\nWe are still developing, do come back to have more fun...",level-1);

return 0;
}
