//Abdulkadir Mirza S1_T2
#include<stdio.h>
//Display Function that displays all the elements of the array
void display(int a[10]);

//Search function that searches for a particular value in the array and returns 1/0 based on whether it is found or not.
int search(int x,int a[10]);

//MAIN
int main(){
	int x,ch;
	int a[10]={1,5,4,8,9,2,0,6,11,7};
	printf("Enter the element you want to search in array:");
	scanf("%d",&x);
	ch=search(x,a);
	if(ch==1)
		printf("YES\n");
	else
		printf("NO\n");
	display(a);
	return 0;
}


//Search Function
int search(int x,int a[10]){
for(int i=0;i<10;i++){	
	if(a[i]==x)
	return 1;
	}
return 0;
}



//Display Function
void display(int a[10]){
for(int i=0;i<10;i++){	
	printf("%d",a[i]);
	}
}
