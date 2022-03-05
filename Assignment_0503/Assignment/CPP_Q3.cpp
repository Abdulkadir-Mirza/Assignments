//Abdulkadir Mirza S1_T2
#include<iostream>

using namespace std;

//AddAmount Class
class AddAmount{
int amount;
public:
	AddAmount()//Default Constructor
	{
	amount=50;
	}
	AddAmount(int x)//Parameterized Constructor
	{
	amount=50 + x;
	}
	void display(){
	cout << "Amount in piggy bank is: " << amount << endl;

	}

};//AddAmount Class ends

//MAIN
int main(){
	AddAmount obj1,obj2(100);

	obj1.display();
	obj2.display();

return 0;
}
