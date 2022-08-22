#include <stdio.h>
#include <stdlib.h>

/*
	Write a C code that allow the user to add a node to linked list 
	by pressing 0 and to print the linked list by pressing 1. 
	The software shall continue forever till the user enters 2. 
	If the user enters any other numbers the software shall print incorrect entry.
*/
typedef struct Node
{
	int data;
	struct Node* next;
}Node;
 
#ifndef NULL
#define NULL (void*)0
#endif
 
int main(void){
	Node* head_node = NULL;
	int choice;
	while(1){		
		printf("To add node enter 0\n");
		printf("To print the linked list enter 1\n");
		printf("To ext press to 2\n");
		printf("Your choice: ");
		scanf("%d", &choice);
 
		if(choice == 2)
		{
			printf("Thank You\nGood Bye\n");
			break;
		}
		else if(choice == 1)
		{
			/* print out all the node */
			if(head_node == NULL)
			{
				/* linked list is empty */
				printf("--------------------\nList is Empty\n--------------------\n");
			}
			else
			{
				/* Linked list is not empty, print out each element in the format (Node Number %d = %d) */
				Node* current_node_ptr = head_node;
				int cnt = 1;
				printf("--------------------\n");
				while(current_node_ptr != NULL)
				{
					printf("Node Number %d = %d", cnt, current_node_ptr->data);
					current_node_ptr = current_node_ptr->next;
					cnt++;
				}
				printf("\n--------------------\n");
			}
		}
		else if(choice == 0)
		{
			printf("Please Enter Node Value: ");
			int input_data;
			scanf("%d", &input_data);
 
			/* if the head is empty, make this node the head */
			if(head_node == NULL)
			{
				Node* new_node = (Node*)malloc(sizeof(Node));
				head_node = new_node;
				head_node->data = input_data;
				head_node->next = NULL; /* this is the only node in the list, no other node is next */
			}
			else
			{
				/* the head node is not empty, attach the input data to the end of the list */
				Node* current_node_ptr = head_node;
				while(current_node_ptr->next != NULL)
				{
					current_node_ptr = current_node_ptr->next;
				}
				Node* new_node = (Node*)malloc(sizeof(Node));	/* create a new node to attach after the current node ptr */
				current_node_ptr->next = new_node;		/* the next of the previously last node is the new node now */
				new_node->data = input_data;
				new_node->next = NULL;	/* this is the last node now */
			}
			printf("Node Added Thank You\n");
		}
		else{
			printf("Invalid Choice please try again");
		}
	}
}
 