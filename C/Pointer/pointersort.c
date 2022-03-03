#include<stdio.h>
int main(){
int a[5]={3,2,1,4,5};
for(int i=0; i<5;i++){
printf("%d ",a[i]);
}
int *p;
p=a;
for(int i=0; i<4;i++){
		for(int j=i+1;j<5;j++){
		if(*(p+i)>*(p+j)){
			int t= *(p+i);
			*(p+i)=*(p+j);
			*(p+j)=t;
			}
		}
}
printf("\nAfter sorting Array is:\n");
for(int i=0; i<5;i++){
printf("%d ",a[i]);
}

return 0;
}
