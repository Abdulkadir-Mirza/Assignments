#include<stdio.h>
int main(){
int n,i;
printf("Enter the size of array:");
scanf("%d",&n);
int A[n],B[n];
int odd=0,even=0;
int j=0;
printf("Enter elements in array A:\n");
for(i =0; i<n;i++){
	printf("Enter %d element in array A:",i);
	scanf("%d",&A[i]);
}
for(i =n-1; i>=0;i--){
	B[j]=A[i];
	j++;
}
printf("Elements in array B:\n");
for(i =0; i<n;i++){
	printf("%d   ",B[i]);
}

return 0;
}
