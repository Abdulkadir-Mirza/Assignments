//Abdulkadir Mirza S1_T2
#include <stdio.h>
 

// Function to in-place merge two sorted arrays X[] and Y[]
void merge(int [], int [], int , int );

//Sort the elements of merged array
void sort(int [],int );

// Utility function to print contents of an array
void printArray(int [], int );


//MAIN
int main()
{
	int X[] = { 1, 4, 7, 8, 10 };
	int Y[] = { 2, 3, 9 };

	int m = sizeof(X) / sizeof(X[0]);
	int n = sizeof(Y) / sizeof(Y[0]);

	merge(X, Y, m, n);
	printf("X:\n");
	printArray(X, m);
	printf("\nY:\n");
	printArray(Y, n);
return 0;
}


//Printarray Function
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        printf(" %d\t",arr[i]);
    }
    printf("\n");
}
 
//Merge function
void merge(int X[], int Y[], int m, int n){
int j=0,q=m+n;
int P[q];
	for(int i=0;i<q;i++){
		if(i<m){
		P[i]=X[i];
		}
		else
		P[i]=Y[i-m];

	}
	sort(P,q);//Sorting the merged array
	for(int i=0;i<q;i++){
		if(i<m){
		X[i]=P[i];
		}
		else{
		Y[j]=P[i];
		j++;
		}
	}

}
 

//Sorting function
void sort(int num[],int n)
{
	for (int i = 0; i < n; ++i){
	   for (int j = i + 1; j < n; ++j){
	      if (num[i] > num[j]){
		 int a = num[i];
		 num[i] = num[j];
		 num[j] = a;
	      }
	   }
	}

}

