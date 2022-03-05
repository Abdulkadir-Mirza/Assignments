//Abdulkadir Mirza S1_T2
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int info;
    struct Node *left;
    struct Node *right;
};

struct Queue{
    struct Node *address;
    struct Queue *next;
};

inline void topBottom(struct Node*);
inline struct Queue* newQueue(struct Node **);
inline void enqueue(struct Node **);
inline void dequeue();
inline struct Node* newNode(int);
inline struct Node* firstNode();

struct Queue *front = NULL;
struct Queue *back = NULL;

int main() {
	struct Node* root = NULL;
	root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->right->left = newNode(6);
	root->right->right = newNode(7);
	root->left->left->left = newNode(8);
	root->left->left->right = newNode(9);
	root->left->right->left = newNode(10);
	root->left->right->right = newNode(11);
	root->right->left->left = newNode(12);
	root->right->left->right = newNode(13);
	root->right->right->left = newNode(14);
	root->right->right->right = newNode(15);
	printf("Top Bottom:\n");
	topBottom(root);
	printf("\n");
	return 0;
}

//Top Bottom fn
void topBottom(struct Node* root) {
	if (root == NULL) {
		return;
	}

	printf("%d ", root->info);
	if (root->left != NULL) {
		printf("%d ", root->left->info);
		printf("%d ", root->right->info);
	}

	if (root->left->left == NULL) {
		return;
	}

	enqueue(&(root->left));
	enqueue(&(root->right));
	struct Node* first = NULL;
	struct Node* second = NULL;

	while (front != NULL) {
		first = front->address;
		dequeue();
		second = front->address;
		dequeue();
		printf("%d ", first->left->info);
		printf("%d ", second->right->info);
		printf("%d ", first->right->info);
		printf("%d ", second->left->info);

		if (first->left->left != NULL) {
			enqueue(&(first->left));
			enqueue(&(second->right));
			enqueue(&(first->right));
			enqueue(&(second->left));
		}
	}
}

/* Queue functions */
struct Queue* newQueue(struct Node **address) {
	struct Queue *temp = (struct Queue*)malloc(sizeof(struct Queue));
	temp -> next = NULL;
	temp -> address = *address;
	return temp;
}

void enqueue(struct Node **address) {
	struct Queue *temp = newQueue(address);

	if(front == NULL && back == NULL) {
		front = back = temp;
	}
	else {
		back -> next = temp;
		back = temp;
	}
}



void dequeue() {
	if(front == NULL) {
		return;
	}

	struct Queue* temp;
	temp = front;

	if(front == back) {
		front = back = NULL;
	}
	else {
		front = front -> next;
	}
	free(temp);
}

struct Node* newNode(int info) {
	struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
	temp -> info = info;
	temp -> left = NULL;
	temp -> right = NULL;
	return temp;
}

struct Node* firstNode(){
	return front->address;
}

