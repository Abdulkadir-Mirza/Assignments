#include<stdio.h>
int main(){
int i,j,r,c;//i and j will be used for loops; r-rows; c-columns

printf("Enter the number of rows:");
scanf("%d",&r);
printf("\nEnter the number of columns:");
scanf("%d",&c);
int A[r][c],B[r][c],mul[r][c];
//A and B will be two matrices; mul[][] matrix will store multiplied data of both matrices.

int max=0,min=9999;

//Getting values for matrix A from user
printf("\nEnter values for matrix A:\n");
for(i=0;i<r;i++){
	for(j=0;j<c;j++){

		printf("Enter value for %d * %d location:",i,j);
		scanf("%d",&A[i][j]);
		if(max<A[i][j])
		max=A[i][j];
		if(min>A[i][j])
		min=A[i][j];
	}
}
//Getting values for matrix B from user
printf("\nEnter values for matrix B:\n");
for(i=0;i<r;i++){
	for(j=0;j<c;j++){

		printf("Enter value for %d * %d location:",i,j);
		scanf("%d",&B[i][j]);
		if(max<B[i][j])
		max=B[i][j];
		if(min>B[i][j])
		min=B[i][j];
	}
}
//Printing Matrix A
printf("\nMatrix A:\n");
for(i=0;i<r;i++){
	for(j=0;j<c;j++){
		printf("%d ",A[i][j]);
	}
	printf("\n");
}
//Printing Matrix B
printf("\nMatrix B:\n");
for(i=0;i<r;i++){
	for(j=0;j<c;j++){
		printf("%d ",B[i][j]);
	}
	printf("\n");
}
//Printing maximum and minimum from both arrays
printf("\nMaximum in both arrays is: %d",max);
printf("\nMinimum in both arrays is: %d\n",min);

//Calculating sum and printing the matrix with the sum
printf("Sum of entered matrices:\n");
for(i=0;i<r;i++){
	for(j=0;j<c;j++){
		printf("%d ",A[i][j]+B[i][j]);
	}
	printf("\n");
}

//Multiplication of two matrices
if(r==c){
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			mul[i][j]=0;
			for(int k=0;k<c;k++){
				mul[i][j]+=A[i][k]*B[k][j];
			}
		}
	}
	printf("\nMultiplication of entered matrices:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",mul[i][j]);
		}
		printf("\n");
		}
	}
else{
	printf("\nMultiplication is not possible since number of columns of 1st matrix is not equal to number of rows of 2nd matrix\n");
	}

return 0;
}
