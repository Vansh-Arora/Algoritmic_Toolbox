// Singly linked list
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

// A function to create a node.
struct node* create_node()
{
    int data_entry;
    printf("Enter value: ");
    scanf("%d",&data_entry);
    struct node* new = (struct node*)malloc(sizeof(struct node));
    new->data = data_entry;
    return new;
}

// A function to insert a node at head.
void insert_at_beg()
{
    struct node* next = create_node();
    next->ptr = head;        // Here we link anything after head to our new node.

    /* Now we make head point to our new node.
       Making this new node the first node. */
    head = next;     
}

// A function to add a node at a particular position.
void insert_at_pos()
{
    int position;
    printf("Enter the position where you want to add a node: ");
    scanf("%d",&position);
    if(position == 1)
        insert_at_beg();
    else
    {
        struct node* next = head;
        int i;
        for(i=1;i<position-1;i++)
        {
            next = next->ptr;
        }
        struct node* new = create_node();
        new->ptr = next->ptr;
        next->ptr = new;
    }
}

// A function to insert at end.
void insert_at_end()
{
    if(head == NULL)
    {
        struct node* new = create_node();
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
        struct node* new = create_node();
        new->ptr = NULL;
        next->ptr = new;
    }
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

// A function to find the number of nodes in a list.
int count_nodes()
{
    struct node* next = head;
    int count = 0;
    while(next != NULL)            // Continue till u don't encounter a null node.
    {
        count++;
        next = next->ptr;         // Move to the next node  
    }
    return count;
}

// A function to check if list is empty.
bool is_empty()
{
    if(head == NULL)
        return true;
    else 
        return false;
}

// A function to renove first node.
void remove_head()
{
    head = head->ptr;
}
// A function to remove a particular node.
// A function to remove last node.

/*--------------------------------------------------------------------------------------------*/



// Driver Function
int main()
{
    int i =0;
    while(i<5){
    //insert_at_beg();
    insert_at_end();
    i++;
    }
    printf("%d\n",count_nodes());
    print_list();
    insert_at_pos();
    print_list();
    printf("%d",is_empty());
    remove_head();
    print_list();
    return 0;
}