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

struct node * delete_first(struct node *head)
{
    struct node *temp=head;
    head=head->next;
    free(temp);
    temp=NULL;
    head->prev=NULL;

    return head;
}

struct node* delete_mid(struct node *head, int pos)
{
    int c=1;
    if(head==NULL)
        cout<<"this link list is empty."<<endl;
    else
    {
       struct node *temp=head,*cur,*t;
       while(temp->next!=NULL)
       {
           temp=temp->next;
           c++;
           if(c==pos)
           {
               break;
           }
       }
       t=temp->prev;
       cur=temp->next;
       t->next=cur;
       cur->prev=t;
       temp->next=NULL;
       temp->prev=NULL;
       free(temp);
       temp=NULL;
    }

    return head;

}

struct node *delete_last(struct node *head)
{
     struct node *temp=head,*cur;
     while(temp->next!=NULL)
     {
         temp=temp->next;
     }
     cur=temp->prev;
     cur->next=NULL;
     temp->prev=NULL;
     free(temp);
     temp=NULL;
     return head;
}

int main()
{
    struct node *head;
    head=(struct node*)malloc(sizeof(struct node));
    int n,x,i;
    cout<<"enter the number of elements : ";
    cin>>n;
    cout<<"enter a data : ";
    cin>>x;

    head->data=x;
    head->prev=NULL;
    head->next=NULL;

    struct node *temp=head;

    for(i=1;i<n;i++)
    {
        cin>>x;
        struct node *newnode=NULL;
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=x;
        newnode->next=NULL;
        newnode->prev=temp;

        temp->next=newnode;
        temp=temp->next;
    }
    cout<<endl<<"the whole link list : ";
    print(head);
    cout<<endl<<"after deleting at first the list is : ";
    head=delete_first(head);
    print(head);
    cout<<endl<<"after deleting at last the list is : ";
    head=delete_last(head);
    print(head);

    cout<<endl<<"enter a position for delation : ";
    cin>>x;
    head=delete_mid(head,x);
    print(head);
}
