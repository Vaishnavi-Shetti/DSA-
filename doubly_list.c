#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev,*next;
};
struct node *head=NULL,*new_node,*temp;

void insert_frnt(int n)
{
    new_node=(struct node*) malloc(sizeof(struct node));
    new_node->data=n;
    new_node->prev=NULL;
    new_node->next=NULL;
    if(head==NULL)
    {
        head=new_node;
    }
    else
    {
        head->prev=new_node;
        new_node->next=head;
        head=new_node;
    }
}

void del_frnt()
{
    if(head==NULL)
    {
        printf("deque empty\n");
    }
    else if(head->next==NULL)
    {
        temp=head;
        printf("%d is deleted\n",temp->data);
        free(temp);
        head=NULL;
    }
    else
    {
        temp=head;
        head=temp->next;
        head->prev=NULL;
        free(temp);
    }
}

void display()
{
    if(head==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        temp=head;
        printf("\nContents of the list\n");
        while(temp!=NULL)
        {
            printf("%d->",temp->data);
            temp=temp->next;
        }
    }
}

void main()
{
    insert_frnt(3);
    insert_frnt(6);
    insert_frnt(2);
    insert_frnt(1);
    display();
    del_frnt();
    display();
}