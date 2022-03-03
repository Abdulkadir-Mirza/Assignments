#include<stdio.h>
int PIN[5]={111,222,333,444,555};
int Bal[5]={10000,11000,1000,5000,7000};

//PIN Checking Function
int login (int i,int A[5]){
int flag=0;
int chance=3;
int pin;
do{	printf("\nEnter pin:");
	scanf("%d",&pin);
	if(pin==A[i])
		{flag=1;
		printf("Pin Correct, Welcome USER %d\n",i);
		break;
		}
	else{
		printf("\nIncorrect pin entered. TRY AGAIN!!!");
		chance--;
		printf("\n%d attempts left",chance);
		}

}while(chance>0);
if(chance==0)
printf("\nCARD BLOCKED!!!");
return flag;
}

//Check Balance Function
void check(int id,int Bal[5]){
printf("\nYour Account Balance is: %d",Bal[id]);
}


//Withdrawing Amount function
void withdraw(int id, int Bal[5]){
int x;
check(id,Bal);
printf("\nEnter Amount to withdraw:");
scanf("%d",&x);
if(x<Bal[id]){
	printf("\nAmount withdrawn");
	Bal[id]=Bal[id]-x;
	printf("\nUpdated balance:%d",Bal[id]);
	}
else
	printf("\nEntered amount is higher than available balance.");
}

//Depositing Amount function
void deposit(int id, int Bal[5]){
int x;
printf("Enter Amount to Deposit:");
scanf("%d",&x);
Bal[id]=Bal[id]+x;
printf("\nAmount Deposited");
check(id,Bal);
}


//MAIN METHOD
int main(){

int id,x,input,pin;
printf("WELCOME USER; Please enter your USER ID:");
scanf("%d",&id);
if(id<5&&id>=0){
pin=login(id,PIN);
}
else
printf("\nWrong User ID..");
if(pin==1){

do{
printf("MENU:\n");
printf("1.Check Balance\n");
printf("2.Withdraw cash\n");
printf("3.Deposit cash\n");
printf("4.Quit\n");
printf("Enter your choice:");
scanf("%d",&input);
switch(input){
	case 1:check(id,Bal);
		break;
	case 2:withdraw(id,Bal);
		break;
	case 3:deposit(id,Bal);
		break;
	case 4:printf("Quitting you out\n");
		x=0;
		break;
	default: printf("Invalid Input!!!");
		x=0;
		break;
	}
if(x!=0){	
	printf("\nTransaction Complete; If you want to continue press 1, otherwise press 0\n");
		scanf("%d",&x);
		}
}while(x!=0);


}

return 0;
}
