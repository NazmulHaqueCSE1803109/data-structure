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
    {
        cout<<"this link list is empty."<<endl;
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

insert_first(struct node *head, int x)
{
    if(head==NULL)
        cout<<"this link list is empty."<<endl;
    else
    {
        struct node *prev=head, *cur=head,*newnode=NULL;
        newnode=(struct node *)malloc(sizeof(struct node));
        newnode->data=x;

        while(x>=cur->data)
        {
            prev=prev->next;
            cur=prev->next;
        }
        newnode->next=cur;
        prev->next=newnode;
    }
    print(head);
}

void sort_list(struct node *head)
{
    int t,x;
    if(head==NULL)
        cout<<"this list is empty."<<endl;
    else
    {
        struct node *temp=head,*cur=temp->next;
        cout<<"enter the searching data  : ";
        cin>>x;
        while(temp!=NULL)
        {
            if(x<=cur->data)
            {
                t=temp->data;
                temp->data=cur->data;
                cur->data=t;
            }
            temp=temp->next;
            cur=temp->next;
        }
    }
    print(head);
}

int main()
{
    int i,n,x;
    cout<<"enter the number of elements : ";
    cin>>n;
    cout<<endl<<"enter the elements : ";
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
    cout<<" enter the elements of link list : ";
    print(head);
    cout<<endl<<"enter a data for inserting at first : ";
    cin>>x;
    cout<<endl<<"print the link list after inserting at first : ";
    insert_first(head,x);
    cout<<"print the list after sorting : ";
    sort_list(head);
    return 0;
}
