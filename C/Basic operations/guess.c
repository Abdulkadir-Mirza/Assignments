#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int x;
srand(time(0));
x=1+rand()%100;
int y=0;
int guess,tries;
do{	tries=0;
	do{
		printf("\nEnter a guess between 1 to 100:");
		scanf("%d",&guess);
		tries++;
		if(guess<x){
			printf("Number is too low\n");
			}
	 	else if(guess>x){
			printf("Number is too high\n");
			}
		else{
			printf("Correct!!! Well Played\n You took %d tries",tries);
			}
	}while(guess!=x);
printf("\n\nIf you want to play again,press 1:");
scanf("%d",&y);
}while(y==1);

return 0;
}
