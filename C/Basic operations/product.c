#include<stdio.h>

int main(){
float P[6]={0,29.5,45.0,49.0,95.5,68.5};
int p1,p2,p3;
float bill=0;
float q1,q2,q3;
printf("Enter products numbers you want to buy:\n");
scanf("%d %d %d",&p1,&p2,&p3);
printf("\nEnter the quantities of respective products:\n");
scanf("%f %f %f",&q1,&q2,&q3);
bill = P[p1]*q1 + P[p2]*q2 + P[p3]*q3;
printf("Total Amount: %f",bill);
return 0;
}
