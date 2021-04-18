#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node *head=NULL;

    head=(struct node *)malloc(sizeof(struct node));
    head->data=73;
    head->link=NULL;

    cout<<head->data<<endl;
    return 0;
}
