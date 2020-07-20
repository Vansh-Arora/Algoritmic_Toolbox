
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* ptr;
};
struct node* head = NULL;

//(struct node*)malloc(sizeof(struct node)

void insert_at_beg()
{
    struct node* next = (struct node*)malloc(sizeof(struct node));
    next->data = 27;
    next->ptr = head;

        
}
int main()
{
    insert_at_beg();
    return 0;
}