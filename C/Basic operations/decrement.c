#include<stdio.h>

void main(){
int num,len=0,totalones=1;
int temp, final;
printf("Enter any number:\n");
scanf("%d",&num);
temp=num;
//Counting the length of the number by operating on a copy of it in temp.
while(temp){
	temp= temp/10;
	len++;
}	
//We create a number containing 1's of the same length of the number entered by user.
for(int i=0;i<len-1;i++){
	totalones = totalones*10;
	totalones = totalones+1;
}
//Subtracting totalones number from the input number num
final = num - totalones;
printf("The final number is:%d",final);


}
