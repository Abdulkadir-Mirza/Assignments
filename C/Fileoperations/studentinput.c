#include<stdio.h>

void main(){
FILE *fp;
fp = fopen("Student.txt","w");
int n,i;
printf("Enter number of students:");
scanf("%d",&n);
for(i=0;i<n;i++){
	int marks;
	char name[10];
	char gender;
	scanf("%d\t%s\t%c",&marks,name,&gender);
	fprintf(fp,"%d\t%s\t%c\n",marks,name,gender);
}


fclose(fp);

}
