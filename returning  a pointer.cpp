#include<iostream>
using namespace std;

struct num
{
    int x,y;
};

struct num* func(int a,int b)
{
    struct num *n=(struct num *)malloc(sizeof(struct num));
    n->x=a;
    n->y=b+5;
    return n;
}

void print(struct num *p)
{
    cout<<"The output is : "<<p->x<<" "<<p->y<<endl;
}

int main()
{
    struct num *n1,*n2;
    n1=func(3,5);
    n2=func(3,7);
    print(n1);
    print(n2);
    return 0;
}
