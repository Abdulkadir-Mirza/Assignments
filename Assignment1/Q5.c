//Abdulkadir Mirza - S1_T2
/*Q5.Write a program that creates a file with a 4K bytes free space. (Such files are called files
with holes.)*/

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
	int fd;
	fd=open("Q5.txt",O_CREAT | O_WRONLY, 0755);
	lseek(fd,4096,SEEK_SET);
	write(fd,"OK",2);
	close(fd);

return 0;
}
