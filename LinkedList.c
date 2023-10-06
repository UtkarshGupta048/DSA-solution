//Program for insert new node in last of LINKED LIST

#include <stdio.h>
#include<malloc.h>
struct node{
  int data;
  struct node* next;
};
int main()
{
    struct node* first=((struct node*)malloc(sizeof(struct node)));
    struct node* second=((struct node*)malloc(sizeof(struct node)));
    struct node* third=((struct node*)malloc(sizeof(struct node)));
    struct node* fourth=((struct node*)malloc(sizeof(struct node)));
    struct node* head=first;
    
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=NULL;
    
    first->data=15;
    second->data=25;
    third->data=35;
    fourth->data=45;
    
    struct node* new=((struct node*)malloc(sizeof(struct node)));
    new->data=75;
    // new->next=head;
    // head=new;
    while(head!=NULL)
    {
        if(head->next==NULL)
        {
            head->next=new;
            new->next=NULL;
        }
        printf("%d \n",head->data);
        head=head->next;
    }
    head->next=new;
}
