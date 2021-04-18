#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void print(struct node *head)
{
    struct node *temp=head;
    while(temp->next!=head->next)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
    int n,x,i;
    cout<<"number of element : ";
    cin>>n;
    cout<<"enter the value : ";
    cin>>x;
    struct node *head=(struct node*)malloc(sizeof(struct node));
    head->data=x;
    head->next=head;

    struct node *temp=head;
    for(i=1;i<n;i++)
    {
        cin>>x;
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=x;
        newnode->next=temp->next;
        temp->next=newnode;
        temp=newnode;
    }
    print(head);
}
