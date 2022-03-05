//Abdulkadir Mirza S1_T2
#include<iostream>
using namespace std;

//Matrix class
class Matrix{
int row=3,col=3;
public:
	int a[3][3];
	Matrix()//Default Constructor
	{
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				a[i][j]=0;
			}
		}
	}
	
	void getrows(){
	cout << "The number of rows are: " << row << endl;
	}

	void getcolumn(){
	cout << "The number of columns are: " << col << endl;;
	}

	void set(int x,int i,int j){
	a[i][j]=x;
	}

	//Adding two Matrix
	Matrix add(Matrix n)
	{
	Matrix res;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			res.a[i][j]=a[i][j]+n.a[i][j];
		}
	}
	return res;
	}

	//Multiplying twi Matrix
	Matrix multiply(Matrix n)
	{
		int i, j, k;
		Matrix res;
		for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
		    res.a[i][j] = 0;
		    for (k = 0; k < 3; k++)
			res.a[i][j] += a[i][k] * n.a[k][j];
		}
		}
	return res;
	}
	
	void display(){
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				cout << a[i][j] << "  "; 
			}
		cout << "\n";
		}
	}



};//Matrix Class ends here;


//MAIN
int main(){
Matrix obj1,obj2;
//Setting values for 1st Matrix:
obj1.set(1,0,0);
obj1.set(2,1,0);
obj1.set(3,2,0);
obj1.set(1,0,1);
obj1.set(2,1,1);
obj1.set(3,2,1);
obj1.set(1,0,2);
obj1.set(2,1,2);
obj1.set(3,2,2);
//Setting values for 2nd matrix
obj2.set(1,0,0);
obj2.set(2,1,0);
obj2.set(3,2,0);
obj2.set(1,0,1);
obj2.set(2,1,1);
obj2.set(3,2,1);
obj2.set(1,0,2);
obj2.set(2,1,2);
obj2.set(3,2,2);
//Calling getrows function
obj1.getrows();
//Calling getcolumn function
obj2.getcolumn();
cout << "Matrix 1:" << endl;
obj1.display();
cout << "Matrix 2:" << endl;
obj2.display();
//Adding Matrix 1 and 2 using add function in class
Matrix obj3=obj1.add(obj2);
cout << "Added Matrix:" << endl;
obj3.display();
//Multiplying Matrix 1 and 2 using multiply function in class
Matrix obj4=obj1.multiply(obj2);
cout << "Multiplied Matrix:" << endl;
obj4.display();

return 0;
}
