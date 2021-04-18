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
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void del_list(struct node *head)
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        free(head);
        head=temp;
    }
    print(head);
}

int main()
{
    int i,n,x;
    cout<<"size of list : ";
    cin>>n;
    cout<<"list elements : ";
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
        newnode->data=x;
        newnode->next=NULL;
        temp->next=newnode;
        temp=newnode;
    }
    cout<<"list is : ";
    print(head);
    cout<<"delete list : ";
    del_list(head);
    print(head);
    cout<<endl<<"the link list deleted successfully."<<endl;
    return 0;
}
