//Abdulkadir Mirza - S1_T2
/* Q1.Write a program using file operations that demonstrates copying of data from input file
and write into output file, untill reaches end of file data.*/
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(){

int fd,fd1,len;
char buf[300];

fd=open("/home/akm/p3.txt",O_RDONLY);

if(fd<0){
	printf("File is not opened");
	return 0;
	}
len=read(fd,buf,300);


fd1=open("/home/akm/output.txt",O_CREAT | O_WRONLY, 0755);

if(fd<0){
	printf("File is not opened");
	return 0;
	}
write(fd1, buf,len);

close(fd);
close(fd1);
return 0;
}
