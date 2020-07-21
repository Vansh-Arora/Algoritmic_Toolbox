// Singly linked list
#include<stdio.h>
#include<stdlib.h>

/* Each node in a linked list must consist of at least 2 elements:
    1) Data value
    2) A pointer to the next node.
    so here we create our own structure for the node. */
struct node
{
    int data;
    struct node* ptr;
};

/* A global variable head to point the beginning of our linked list. */
struct node* head = NULL;

/* Functions to perform different operations on the list. */
/*--------------------------------------------------------------------------------------------*/

// A function to insert a node at head.
void insert_at_beg()
{
    int data_entry;
    printf("Enter value: ");
    scanf("%d",&data_entry);
    
    // In this part of code we create a new node..
    // ------- 
    struct node* next = (struct node*)malloc(sizeof(struct node));
    next->data = data_entry; // Here we put the data inside our new node.
    next->ptr = head;        // Here we link anything after head to our new node.
    // -------

    /* Now we make head point to our new node.
       Making this new node the first node. */
    head = next;     
}

// A function to print the list.
void print_list()
{
    struct node* next = head;
    while(next != NULL)            // Continue till u don't encounter a null node.
    {
        printf("%d ",next->data);
        next = next->ptr;         // Move to the next node  
    }
}

// A function to insert at end.

void insert_at_end()
{
    if(head == NULL)
    {
        int data_entry;
        printf("Enter value: ");
        scanf("%d",&data_entry);
        struct node* new = (struct node*)malloc(sizeof(struct node));
        new->data = data_entry;
        new->ptr = NULL;
        head = new;
    }
    else
    {
        struct node* next = head;
        while(next->ptr != NULL)            // Continue till u don't encounter a null node.
        {
            next = next->ptr;         // Move to the next node  
        }
        int data_entry;
        printf("Enter value: ");
        scanf("%d",&data_entry);
        struct node* new = (struct node*)malloc(sizeof(struct node));
        new->data = data_entry;
        new->ptr = NULL;
        next->ptr = new;
    }
}

/*--------------------------------------------------------------------------------------------*/



// Driver Function
int main()
{
    insert_at_beg();
    insert_at_end();
    print_list()
    return 0;
}