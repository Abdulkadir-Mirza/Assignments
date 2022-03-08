//Abdulkadir Mirza - S1_T2
/*Q2.Write a program that demonstrates repositioning of file offset using SEEK_SET,
SEEK_CUR and SEEK_END.*/

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{

int fd1,len;
char r_buf[100];

fd1=open("/home/akm/p3.txt",O_CREAT | O_RDWR,0755);
printf("Fd for open is %d\n",fd1);
if(fd1<0)
	printf("File is not opened");

lseek(fd1,0,SEEK_END);//SEEK_END: Setting offset from end
read(fd1,r_buf,10);
printf("Data from buffer= %s\n",r_buf);//printing from buffer


lseek(fd1,0,SEEK_SET);//SEEK_SET: Setting offset from beginning
read(fd1,r_buf,10);
printf("Data from buffer= %s\n",r_buf);//printing from buffer


lseek(fd1,-5,SEEK_CUR);//SEEK_SET: Setting offset from beginning
read(fd1,r_buf,10);
printf("Data from buffer= %s\n",r_buf);//printing from buffer

close(fd1);//closing the fd
return 0;

}

