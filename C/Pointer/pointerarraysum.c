#include<stdio.h>
int main(){
int a[5]={1,2,3,4,5};
for(int i=0; i<5;i++){
printf("%d ",a[i]);
}
int *p;
p=a;
int sum=0;
for(int i=0; i<5;i++){
sum+=*(p+i);
}
printf("\nSum is: %d",sum);

return 0;
}
