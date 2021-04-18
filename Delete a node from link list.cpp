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
        cout<<"the link list is empty."<<endl;
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

void del_first(struct node *head)
{
    if(head==NULL)
        cout<<"the link list is empty."<<endl;
    else
    {
        struct node *temp=head;
        head=head->next;
        free(temp);
        temp=NULL;
    }
    cout<<endl<<"print the link list after delete first node : "<<endl;
    print(head);
}

void del_end(struct node *head)
{
    if(head==NULL)
        cout<<"the link list is empty."<<endl;
    else
    {
        struct node *temp=head,*cur=head;
        while(cur->next!=NULL)
        {
            temp=temp->next;
            cur=temp->next;
        }
        temp->next=NULL;
        free(cur);
        cur=NULL;
    }
    cout<<endl<<"print the link list after delete element at last : "<<endl;
    print(head);
}

void del_mid(struct node *head)
{
    if(head==NULL)
        cout<<"the link list is empty."<<endl;
    else
    {
        int pos,i=1;
        cout<<"please enter the position where you want to delete : ";
        cin>>pos;
        struct node *prev=head,*cur=head;
        while(i!=pos)
        {
            i++;
            prev=cur;
            cur=cur->next;
        }
        prev->next=cur->next;
    }
    cout<<endl<<"link list after delete node at middle : ";
    print(head);
}

int main()
{
    int n,x;
    cout<<"enter the number of elements : ";
    cin>>n;

    cin>>x;
    struct node *head=NULL;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=x;
    head->next=NULL;
    struct node *temp=head;

    for(int i=1;i<n;i++)
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
    del_first(head);
    del_end(head);
    del_mid(head);
}
