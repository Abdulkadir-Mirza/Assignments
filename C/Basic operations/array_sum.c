#include<stdio.h>
int main(){
int sum =0;
int a[10] = {3,5,6,8,9,6,7,8,9,2};
for(int i=0; i<10; i++){
sum = sum + a[i];

}
printf("Sum is: %d",sum);
return 0;
}
