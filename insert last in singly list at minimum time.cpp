#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node * add_end(struct node *p,int data)
{
    struct node *temp=NULL;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;

    p->next=temp;
    return temp;
}

int main()
{
    int i;
    struct node *head=NULL;
    head=(struct node *)malloc(sizeof(struct node));
    head->data=1;
    head->next=NULL;
    struct node *p=head;

    p=add_end(p,3);
    p=add_end(p,5);
    p=add_end(p,7);
    p=add_end(p,9);

    p=head;

    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
