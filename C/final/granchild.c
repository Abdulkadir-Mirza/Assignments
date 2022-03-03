#include<stdio.h>
#include<string.h>

//Structure to store Data from file.
struct name{
char child[10];
char father[10];
}a[5];


int main(){
FILE *fp;//file pointer
char c;
char in[10],ch[10];
fp=fopen("file.txt","r");

for(int j=0;j<5;j++)
	{
	fscanf(fp,"%s %s",a[j].child,a[j].father);
	if(c==EOF)
	break;
	}
fclose(fp);

//Taking String from user.
printf("Enter Name:");
scanf("%s",in);

for(int j=0;j<5;j++){
		if(!(strcmp(in,a[j].father))){
		strcpy(ch,a[j].child);
		}
	}

int count=0;
for(int j=0;j<5;j++){
		if(!(strcmp(ch,a[j].father))){
		count++;
		}
	}
printf("%d\n",count);//Printing No of Grandchildren

return 0;
}
