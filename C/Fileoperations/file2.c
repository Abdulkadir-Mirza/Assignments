//Copying from 1 text file to another
#include<stdio.h>

void main(){
FILE *fp1,*fp2;
char c;
fp1=fopen("hello.txt","r");
fp2=fopen("hello1.txt","w");
do{
c=getc(fp1);
if(c==EOF)
break;
putc(c,fp2);

}while(c!=EOF);

fclose(fp1);
fclose(fp2);
}
