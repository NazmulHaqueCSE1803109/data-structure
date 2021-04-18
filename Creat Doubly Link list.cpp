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

void insert_last(struct node *head, int x)
{

    if(head==NULL)
    {
        cout<<"This link list is empty."<<endl;
    }
    else{
        struct node *temp=head,*newnode=NULL;
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=x;
        newnode->next=NULL;
        newnode->prev=NULL;

        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->prev=temp;
    }
    print(head);
}

void insert_first(struct node *head, int x)
{
    if(head==NULL)
        cout<<"this link list is empty."<<endl;
    else
    {
        struct node *newnode=NULL;
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=x;
        newnode->next=head;
        newnode->prev=NULL;
        head->prev=newnode;
        head=newnode;
    }
    print(head);
}

void insert_middle(struct node *head, int pos, int x)
{
    if(head==NULL)
        cout<<"this link list is empty."<<endl;
    else
    {
        int c=1;
        struct node *newnode=NULL,*p=head, *q=p->next;
        while(q!=NULL)
        {
            p=p->next;
            q=p->next;
            c++;
            if(c==pos)
            {
                newnode=(struct node*)malloc(sizeof(struct node));
                newnode->data=x;
                newnode->next=q;
                q->prev=newnode;
                p->next=newnode;
                newnode->prev=p;
            }
        }
    }
    print(head);
}


void reverse_list(struct node *head)
{
    struct node *temp=head,*ptr=temp->next;

    temp->next=NULL;
    temp->prev=ptr;
    ptr->next=temp;
    temp=ptr;
    while(ptr->next!=NULL)
    {
        temp=temp->next;
        ptr=temp->next;

        temp->prev=ptr;
        ptr->next=temp;
        temp=ptr;
    }
    ptr->prev=NULL;
    head=ptr;

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
    cout<<endl<<"The whole link list after created : ";
    print(head);


    cout<<endl<<"enter a data for adding at the end : ";
    cin>>x;
    cout<<"the link list after adding at last : ";
    insert_last(head,x);


    cout<<endl<<"enter a data for adding at first : ";
    cin>>x;
    cout<<endl<<"the link list after adding data at first : ";
    insert_first(head,x);


    cout<<endl<<"enter the position where i want to add a data : ";
    cin>>pos;
    cout<<endl<<"enter a data for adding at any place : ";
    cin>>x;
    cout<<"the link list after adding data at middle : ";
    insert_middle(head,pos,x);


    cout<<endl<<"the list after reverse : ";
    reverse_list(head);

    return 0;
}
