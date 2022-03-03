#include<stdio.h>
void main(){
int m1,m2,m3,m4,x;
int avg;
printf("Enter your marks for four subjects:");
printf("\nSubject 1:");
scanf("%d",&m1);
printf("\nSubject 2:");
scanf("%d",&m2);
printf("\nSubject 3:");
scanf("%d",&m3);
printf("\nSubject 4:");
scanf("%d",&m4);
avg = (m1+m2+m3+m4)/4;
if(avg>90)
	x=1;
else if(avg>75)
	x=1;
else if(avg>60)
	x=2;
else if(avg>35)
	x=2;
else
	x=3;

switch(x){
	case 1:
	printf("Congratulations you have scored A/B");
	break;
	case 2:
	printf("Good you have scored C/D");
	break;
	case 3:
	printf("You have scored F, Better luck next time");
	break;
	default:
	break;

	}
}
