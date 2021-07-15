#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*head_ptr=NULL;

void create(int A[],int n)
{
    struct Node *current_node,*last;
    head_ptr = (struct Node *)malloc(sizeof(struct Node));
    head_ptr->data=A[0];
    head_ptr->next=NULL;
    last = head_ptr;
    
    for(int i=1;i<n;i++)
    {
        current_node=(struct Node*)malloc(sizeof(struct Node));
        current_node->data=A[i];
        current_node->next=NULL;
        last->next=current_node;
        last = current_node;
    }
}

void display(struct Node *p)
{
    printf("Linked list elements are : ");
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}

void search(int search_element)
{
    struct Node *p = head_ptr;
    while(p!=NULL){
        if(p->data == search_element){
            printf("Element found at location : %d\n",(int)p);
            return;
        }
        p=p->next;
    }
    printf("Element not found\n");
    return;
}

int second_last(struct  Node *ptr)
{
    int sec_last = 0;
    struct Node *current_node = ptr->next,*previous_node=ptr;
    while(current_node!= NULL){
        sec_last = previous_node->data;
        previous_node = previous_node->next;
        current_node = current_node->next;
    }
    return sec_last;
}

void reverse(struct Node *ptr)
{
    if(ptr->next == NULL){
        printf("%d ",ptr->data);
        return;
    }
    reverse(ptr->next);
    printf("%d ",ptr->data);
}

void insert_at_end(struct Node *ptr,int value)
{
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    struct Node *new_ptr = (struct Node *)malloc(sizeof(struct Node));
    new_ptr->data = value;
    new_ptr->next  = NULL;
    ptr->next = new_ptr;
}

void insert_at_index(struct Node *ptr,int index,int value)
{
    int i = 2;
    do{
        ptr = ptr->next;
        i++;
    }while(i<index);

    struct Node *new_ptr = (struct Node *)malloc(sizeof(struct Node));
    new_ptr->data = value;
    new_ptr->next = ptr->next;
    ptr->next = new_ptr; 
}

void middle_element(struct Node *ptr)
{
    struct Node *fast_ptr = ptr;
    struct Node *slow_ptr = ptr;
    while(fast_ptr != NULL && fast_ptr->next != NULL){
        fast_ptr = fast_ptr->next->next;
        slow_ptr = slow_ptr->next;
    }
    printf("The middle element is %d\n",slow_ptr->data);
}

int count_elements(struct Node *p)
{
    int count = 0;
    while(p!=NULL){
        p=p->next;
        count++;
    }
    return count;
}

int print_index(struct Node *p,int index)
{
    int i = 0;
    do{
        p=p->next;
        i++;
    }while(i<index);
    return (p->data);
}
int main()
{
    int A[] = {3,5,7,10,15};

    create(A,5);
    
    display(head_ptr);

    insert_at_end(head_ptr,20);
    insert_at_end(head_ptr,27);
    display(head_ptr);

    insert_at_index(head_ptr,3,35);
    display(head_ptr);
    
    int result = second_last(head_ptr);
    printf("Second last element is : %d\n",result);

    middle_element(head_ptr);

    printf("The reversed list is : ");
    reverse(head_ptr);

    int no_of_elements = count_elements(head_ptr);
    printf("\nNumber of elements in the linked list is  : %d\n",no_of_elements);
    printf("1/4 element in the lnked list is %d ,and 3/4 element of the linked list is %d.\n",print_index(head_ptr,no_of_elements*0.75),print_index(head_ptr,no_of_elements*0.25));
    return 0;
}

/*OUTPUT : 
Linked list elements are : 3 5 7 10 15 
Linked list elements are : 3 5 7 10 15 20 27 
Linked list elements are : 3 5 35 7 10 15 20 27 
Second last element is : 20
The middle element is 10
The reversed list is : 27 20 15 10 7 35 5 3 
Number of elements in the linked list is  : 8
1/4 element in the lnked list is 20 ,and 3/4 element of the linked list is 35.
*/
