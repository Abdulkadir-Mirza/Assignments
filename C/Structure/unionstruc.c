#include<stdio.h>
#include<string.h>

struct Student{
int id;
char name[20];
float cpi;
int backlog;

}s1;

union Book{
int id;
char title[20];
int pages;
int price;


}u1;

int main(){
s1.id=1;
strcpy(s1.name,"AAA");
s1.cpi=8.5;
s1.backlog = 1;

printf("Information of student is:\n%d\n%s\n%f\n%d\n",s1.id,s1.name,s1.cpi,s1.backlog);


u1.pages=300;
printf("Pages of book are:%d\n",u1.pages);

u1.price=350;
printf("Pages of book are:%d\n",u1.pages);
printf("Price of book is:%d\n",u1.price);

return 0;
}
