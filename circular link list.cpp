#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void print(struct node *tail)
{
    if(tail==NULL)
        cout<<"this list is empty ."<<endl;
    else
    {
        struct node *temp=tail->next;
        do{
            cout<<temp->data<<" ";
            temp=temp->next;
        }while(temp!=tail->next);

    }
    cout<<endl;
}
struct node *addtoEmpty(int data)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=temp;
    return temp;
}

struct node* addtoEnd(struct node *tail, int data)
{
    struct node *newnode=NULL;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=tail->next;
    tail->next=newnode;
    tail=tail->next;

    return tail;
}

struct node *creatlist(struct node *tail)
{
    int i,n,data;
    cout<<"enter the number of elements : ";
    cin>>n;
    cout<<"enter element 1 : ";
    cin>>data;

    tail=addtoEmpty(data);

    for(i=1;i<n;i++)
    {
        cout<<"enter element "<<i+1<<" : ";
        cin>>data;

        tail=addtoEnd(tail,data);
    }
    return tail;
}

int main()
{
    struct node *tail=NULL;
    tail=creatlist(tail);
    print(tail);
    return 0;
}
