#include<iostream>
using namespace std;

struct point{

   int x,y;
};

void input(struct point *n)
{
    cin>>n->x>>n->y;
}

struct point edit(struct point p)
{
    p.x +=1;
    p.y +=5;
    return p;
}

void print(struct point p)
{
    cout<<p.x<<" "<<p.y<<endl;
}

int main()
{
    struct point p,p1;
    input(&p);
    p1=edit(p);
    print(p1);
    return 0;
}
