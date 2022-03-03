#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main(){
FILE *fp1,*fp2;
fp1=fopen("hello.txt","r");
fp2=fopen("hello1.txt","r");
char c,d;
int flag=0;
c=getc(fp1);
d=getc(fp2);
	while(c!=EOF && d!=EOF){
	c=getc(fp1);
	d=getc(fp2);
	if(c!=d)
	flag=0;
	else{
	flag=0;
	break;
	}

	}
if(flag==1)
printf("True");
else
printf("False");

fclose(fp1);
fclose(fp2);
}
