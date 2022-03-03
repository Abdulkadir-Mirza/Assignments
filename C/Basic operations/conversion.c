#include<stdio.h>

void main(){
int km;
float feet,m, cm,inch;
printf("Input:");
scanf("%d",&km);
feet = 3280.84 * km;
m = 1000*km;
cm = 100000*km;
inch = 39370.1*km;
printf("Output\nFeet:%f",feet);
printf("\nMeters:%f",m);
printf("\nCentimeters:%f",cm);
printf("\nInches:%f",inch);


}
