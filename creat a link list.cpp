#include<iostream>
using namespace std;

struct node
{
    int data;
    node *link;
};


void print(struct node *head)
{
    int c=0;
    cout<<endl<<"The elements of link list are : ";
    if(head==NULL)
        cout<<"the link list is empty."<<endl;
    else
    {
        struct node *temp=NULL;
        temp=head;
        while(temp!=NULL)
        {
            c++;
            cout<<temp->data<<" ";
            temp=temp->link;
        }
    }
    cout<<endl<<"the number of elements in link list : "<<c<<endl;
}

int main()
{
    int n,x;
    cout<<"Enter the number of elements : "<<endl;
    cin>>n;
    cin>>x;
    struct node *head=NULL;
    head=(node *)malloc(sizeof(node));
    head->data=x;
    head->link=NULL;

    struct node *temp=head;

    for(int i=1;i<n;i++)
    {
        cin>>x;
        struct node *newnode=NULL;
        newnode=(node *)malloc(sizeof(newnode));
        newnode->data=x;
        newnode->link=NULL;
        temp->link=newnode;
        temp=temp->link;
    }
    print(head);
    return 0;
}
