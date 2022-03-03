#include<stdio.h>

void main(){
FILE *fp1,*fp2,*fp3;
char c;
int d;
fp1 = fopen("num.txt","r");
fp2 = fopen("odd.txt","w");
fp3 = fopen("even.txt","w");
do{
c=getc(fp1);
if(c%2!=0){
putc(c,fp2);
}
else
{
putc(c,fp3);
}

}while(c!=EOF);

fclose(fp1);
fclose(fp2);
fclose(fp3);

}
