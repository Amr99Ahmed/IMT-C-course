#include <stdio.h>
#include <stdlib.h>

/*
	Complete lab 2 by adding a new function that allow the user to delete certain node. 
	The user shall enter a value then the code shall delete any node that holds this value
*/

typedef struct Node{
int number;
struct Node* next;
}Node;

void Push(Node** head, int A)
{
	Node* n = malloc(sizeof(Node));
	n->number = A;
	n->next = *head;
	*head = n;
}

void deleteN(Node** head, int position)
{
	Node* temp;
	Node* prev;
	temp = *head;
	prev = *head;
	for (int i = 0; i < position; i++) {
		if (i == 0 && position == 1) {
			*head = (*head)->next;
			free(temp);
			
		}
		else {
			if (i == position - 1 && temp) {
				prev->next = temp->next;
				free(temp);
			}
			else {
				prev = temp;
				if (prev == NULL) // position was greater than number of nodes in the list
					break;
				temp = temp->next;
			}
		}
	}
	

}

void printList(Node* head)
{
while(head){
	printf("[%i] [%p]->%p\n", head->number, head, head->next);
	head = head->next;
	}
	printf("\n\n");


}

int main()
{
	Node* list = malloc(sizeof(Node));
	list->next = NULL;
	Push(&list, 1);
	Push(&list, 2);
	Push(&list, 3);

	printList(list);
	deleteN(&list, 1); //delete any position from list
	printList(list);
	return 0;
}
