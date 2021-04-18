#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

void print(struct node *head)
{
    if(head==NULL)
    {
        cout<<"Your link list is empty."<<endl;
    }
    else
    {
        struct node *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
}

void delete_last(struct node *head)
{
    if(head==NULL)
       {
            cout<<"this link list is empty."<<endl;
       }
    else
    {
      struct node *p=head,*q=p->next;
      while(q->next!=NULL)
      {
          p=p->next;
          q=p->next;
      }

        q->prev=NULL;
        p->next=NULL;
        free(q);
        q=NULL;
    }
    print(head);
}

void delete_first(struct node *head)
{
    if(head==NULL)
        cout<<"this link list is empty."<<endl;
    else
    {
        struct node *temp=head;
        head=head->next;
        head->prev=NULL;
        free(temp);
        temp=NULL;
    }
    print(head);
}


int main()
{
    struct node *head;
    head=(struct node *)malloc(sizeof(struct node));
    int x,n,i,pos;
    cout<<"Enter the number of elements of Link list : ";
    cin>>n;
    cout<<"Enter the data for inserting in doubly link list : ";
    cin>>x;

    head->data=x;
    head->prev=NULL;
    head->next=NULL;

    struct node *temp=head;

    for(i=1;i<n;i++)
    {
        cin>>x;
        struct node *newnode=NULL;
        newnode=(struct node *)malloc(sizeof(struct node));
        newnode->data=x;
        newnode->next=NULL;
        newnode->prev=temp;

        temp->next=newnode;
        temp=temp->next;

    }
    cout<<endl<<"the list after deleting at first : ";
    delete_first(head);
    cout<<endl<<"the list after deleting at last : ";
    delete_last(head);
    return 0;
}
