#include<stdio.h>
int main(){
int n,i;
printf("Enter the size of array:");
scanf("%d",&n);
int A[n];
int odd=0,even=0;
printf("Enter elements in array A:\n");
for(i =0; i<n;i++){
	printf("Enter %d element in array A:",i);
	scanf("%d",&A[i]);
}
for(i =0; i<n;i++){
	if(A[i]%2==0)
	even++;
	else
	odd++;
}
printf("\nNumber od Odd elements: %d",odd);
printf("\nNumber od Even elements: %d",even);

return 0;
}
