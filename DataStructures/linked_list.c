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

/* A function to insert a node at head. */
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

// Driver Function
int main()
{
    insert_at_beg();
    return 0;
}