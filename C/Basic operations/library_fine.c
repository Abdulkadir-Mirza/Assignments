#include<stdio.h>

void main(){
int d,stdid;
printf("Studentid:");
scanf("%d",&stdid);
printf("\nNumber of late days : ");
scanf("%d",&d);
if(d<=5){
printf("\nOutput: %d",(2*d));
}
else if(d<=10){
printf("\nOutput: %d",((2*5)+(3*(d-5))));
}
else if(d<=30){
printf("\nOutput: %d",((2*5)+(3*5)+(7*(d-10))));
}
else{
printf("\nOutput: %d",((2*5)+(3*5)+(7*(d-10))));
printf("\nMembership for library is CANCELLED.");
}

}
