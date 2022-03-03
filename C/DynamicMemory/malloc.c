#include<stdio.h>
#include<stdlib.h>

void main(){
	int *fp;
	fp=(int *)malloc(sizeof(int));
	printf("Memory allocated at %p\n",fp);
	printf("Initial value is %d",*fp);
	*fp =25;
	printf("\nA is %d\n",*fp);
	free(fp);

}
