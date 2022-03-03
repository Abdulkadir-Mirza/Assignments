#include<stdio.h>

float si (int,int,int);
void main(){
int p,r,t;
float Amount;
printf("Enter the Principal Amount:");
scanf("%d",&p);
printf("\nEnter the rate of Interest:");
scanf("%d",&r);
printf("Enter the time:");
scanf("%d",&t);
Amount=si(p,r,t);
printf("\nInterest Amount will be: %f",Amount);

}

float si(int x,int y,int z){
float a;
a = (x*y*z)/100;
return a;
}
