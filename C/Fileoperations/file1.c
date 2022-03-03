#include<stdio.h>
#include<string.h>
void main(){
FILE *fp;
char str[20];
char c;
fp=fopen("hello.txt","r");
//fprintf(fp,"Hello, How are you?");
do{
c=getc(fp);
if(c==EOF)
break;
printf("%c",c);

}while(c!=EOF);


fclose(fp);
}
