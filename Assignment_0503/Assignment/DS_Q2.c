//Abdulkadir Mirza S1_T2
#include <stdio.h>
#include <string.h>

int front=-1,rear=-1,b=100;
//create the queue
char temp[100],queue[100][100];

inline int enqueue(int *front, int *rear, int size, char *element);
inline char* dequeue(int *front, int *rear);
inline void loop();

//MAIN
int main() {
	int num;
	printf("Enter a number upto 100: ");
	scanf("%d",&num);

	//Pushing "1" to the queue first
	char temp[1] = "1";
	enqueue(&front,&rear,b,temp);

	for(int k=1;k<=num;k++) {
		/*For some reason if i call the code from loop,
		directly here instead of the function, like
		for(...){code} then the loop only runs once,
		but it works normally if i put the code in a
		function and then call the function here.*/
		loop();
	}
	return 0;
}

void loop() {
	//A temp var
	char temp2[100];
	//Copying the dequeued element into temp
	strcpy(temp,dequeue(&front,&rear));
	printf("%s\n",temp);
	strcpy(temp2,temp);
	//Concat 0 as a character to temp
	strcat(temp,"0");
	//Enqueue the new concatted temp
	enqueue(&front,&rear,b,temp);
	//Concat 1 as a character to temp2
	strcat(temp2,"1");
	//Enqueue the new temp2
	enqueue(&front,&rear,b,temp2);
}

int enqueue(int *front, int *rear, int size, char *element) {
	if(*rear == size-1) {
		printf("Queue Overflow\n");
		return 0;
	}
	else{
		if(*front == -1 && *rear == -1) {
			*front = *rear = 0;
		}
		else {
			*rear = *rear + 1;
		}
		strcpy(queue[(*rear)], element);
	}
	return 0;
}

char* dequeue(int *front, int *rear) {
	if(*front == -1)
	{printf("Queue Underflow\n"); return 0;}
	strcpy(temp,queue[*front]);
	if(*front == *rear){*front = -1;*rear = -1;}
	else{*front = *front + 1;}
	return temp;
}
