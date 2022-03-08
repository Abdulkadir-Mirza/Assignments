//Abdulkadir Mirza - S1_T2
/*Q4.Write a program that implements all file operations(open/creat/write/read/lseek/close)*/

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(){

int fd,len;
creat("Q4.txt",0755);//Create
char buf[50]="Q4 Implementation; All System Calls in one program";
fd=open("Q4.txt",O_WRONLY);//Open
len=write(fd,buf,20);//Write
close(fd);//Close

fd=open("Q4.txt",O_RDONLY);
char r_buf[50];
read(fd,r_buf,len);//Read
printf("%s\n",r_buf);
close(fd);
return 0;

}
