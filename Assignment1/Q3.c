//Abdulkadir Mirza - S1_T2
/*Q3.Write program that returns “ls -l ” kind of structure of information from an existing file
or opend file.*/

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>
int main(){

	struct stat st,st1;
	int fd;
	stat("Q1.c",&st);//Showing structure statistics for existing file
	printf("File size: %lu\n",st.st_size);
	printf("File inode: %lu\n",st.st_ino);

	fd=open("Q2.c",O_RDONLY);
	fstat(fd,&st1);//Showing structure statistics for opened file
	printf("File size: %lu\n",st1.st_size);
	printf("File inode: %lu\n",st1.st_ino);

	return 0;

}
