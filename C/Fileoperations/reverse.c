#include<stdio.h>

void main(){
FILE *fp;
char c;
fp=fopen("hello.txt","r");
int i=0;

fseek(fp,0,SEEK_END);
int cnt=ftell(fp);
while(i<cnt)
{
i++;
fseek(fp,-i,SEEK_END);
c = getc(fp);
printf("%c",c);

}
fclose(fp);

}
