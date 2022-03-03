#include<stdio.h>

struct User{
	int id;
	int pin;
	char name[20];
	int bal;
};

//PIN Checking Function
int login (int uid,int upin){
int flag=0;
int chance=3;
int pin;
do{	printf("\nEnter pin:");
	scanf("%d",&pin);
	if(pin==upin)
		{flag=1;
		printf("Pin Correct, Welcome USER %d\n",uid);
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
void check(int uid,int ubal){
printf("\nYour Account Balance is: %d",ubal);
}

//Withdrawing Amount function
int withdraw(int uid, int ubal){
int x;
check(uid,ubal);
printf("\nEnter Amount to withdraw:");
scanf("%d",&x);
if(x<ubal){
	printf("\nAmount withdrawn");
	ubal-=x;
	printf("\nUpdated balance:%d",ubal);
	}
else
	printf("\nEntered amount is higher than available balance.");
return ubal;
}


//Depositing Amount function
int deposit(int uid, int ubal){
int x;
printf("Enter Amount to Deposit:");
scanf("%d",&x);
ubal+=x;;
printf("\nAmount Deposited");
check(uid,ubal);
return ubal;
}

//MAIN METHOD
int main(){
int n;
printf("Enter number of users'n':");
scanf("%d",&n);
struct User U[n];

printf("\nEnter details for all Users in ID NAME PIN BALANCE format");
for(int i=0;i<n;i++){
	printf("\nEnter details of User %d",i);
	scanf("%d %s %d %d",&U[i].id,&U[i].name,&U[i].pin,&U[i].bal);
	}

int id,x,t=0;//t will be used to check whether the user id is right.
printf("\nEnter your User ID:");
scanf("%d",&id);

for(int i=0;i<n;i++){
	if(U[i].id==id){
		t=1;
		x=i;
		break;
		}
	}


if(t==1){
int uid,upin,ubal,pin,input,z=1;
char uname=U[x].name;
uid=U[x].id;
upin=U[x].pin;
ubal=U[x].bal;
pin=login(uid,upin);
if(pin==1)
{
do{
printf("\nMENU:\n");
printf("1.Check Balance\n");
printf("2.Withdraw cash\n");
printf("3.Deposit cash\n");
printf("4.Quit\n");
printf("Enter your choice:");
scanf("%d",&input);
switch(input){
	case 1:check(uid,ubal);
		break;
	case 2:ubal = withdraw(uid,ubal);
		break;
	case 3:ubal = deposit(uid,ubal);
		break;
	case 4:printf("Quitting you out\n");
		z=0;
		break;
	default:break;
	}
		
}while(z!=0);


}

}
if(t==0)
printf("\nWrong USER ID!!!");

return 0;
}
