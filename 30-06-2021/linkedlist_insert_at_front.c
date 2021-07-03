//Write a program to insert element at the front of the linked list.

#include <stdio.h>
#include <stdlib.h>

typedef struct linked_list
{
    char pos;
    struct linked_list *next;
}linked_list_t;

typedef linked_list_t *node_ptr;

void insert_at_front(node_ptr *head,char pos)
{
    node_ptr new_node = malloc(sizeof(linked_list_t));
    new_node->pos = pos;
    new_node->next = *head;
    *head = new_node;
}

int main()
{
    node_ptr node = malloc(sizeof(linked_list_t));
    printf("First element of the linked list is %d \n",node->pos);
    insert_at_front(&node,9);
    printf("First element of the linked list is %d \n",node->pos);
    return 0;
}

/*
OUTPUT : 
First element of the linked list is 0 
First element of the linked list is 9 
*/
