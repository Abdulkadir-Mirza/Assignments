#include<stdio.h>
int main(){
int r,c,i,j;
printf("Enter the size of array:\n");
printf("Enter number of rows:");
scanf("%d",&r);
printf("Enter number of columns:");
scanf("%d",&c);
int A[r][c];
printf("Enter elements in array A:\n");
for(i =0; i<r;i++){
	for(j=0;j<c;j++){
		printf("Enter %d * %d th element in array A:",i,j);
		scanf("%d",&A[i][j]);
	}
}
for(i =0; i<r;i++){
	for(j=0;j<c;j++){
		printf("%d  ",A[i][j]);
	}
	printf("\n");
}
int pos=0,neg=0,zero=0;
for(i =0; i<r;i++){
	for(j=0;j<c;j++){
		if(A[i][j]>0)
		pos++;
		else if(A[i][j]<0)
		neg++;
		else
		zero++;
	}
}
printf("\nPositive elements: %d",pos);
printf("\nNegative elements: %d",neg);
printf("\nZero elements: %d",zero);

return 0;
}
