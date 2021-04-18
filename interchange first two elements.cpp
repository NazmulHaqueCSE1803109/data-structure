#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void print(struct node *head)
{
    if(head==NULL)
        cout<<"This link list is not created successfully."<<endl;
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


int main()
{
     int n,x,i;
    cout<<"Enter the number of elements : ";
    cin>>n;
    cout<<"Enter the values : ";
    cin>>x;
    struct node *head=NULL;
    head=(struct node *)malloc(sizeof(struct node));
    head->data=x;
    head->next=NULL;

    struct node *temp=head;

    for(i=2;i<=n;i++)
    {
        cin>>x;
        struct node *newnode=NULL;
        newnode=(struct node *)malloc(sizeof(struct node));
        newnode->data=x;
        newnode->next=NULL;
        temp->next=newnode;
        temp=temp->next;
    }
    print(head);
    struct node *prev=head,*cur=prev->next;
    head->next=cur->next;
    cur->next=head;
    head=cur;
    cout<<endl<<"print link list after interchange : ";
    print(head);
    return 0;
}
