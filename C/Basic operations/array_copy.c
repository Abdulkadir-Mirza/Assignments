#include<stdio.h>
int main(){
int n,i;
printf("Enter the size of array:");
scanf("%d",&n);
int A[n],B[n];
printf("Enter elements in array A:\n");
for(i =0; i<n;i++){
	printf("Enter %d element in array A:",i);
	scanf("%d",&A[i]);
}
printf("Elements in Array B after copying:");
for(i =0; i<n;i++){
	B[i]=A[i];
	printf("\n%d",B[i]);
}


return 0;
}
