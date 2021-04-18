#include<iostream>
using namespace std;

struct num
{
    int x;
    char y;
    struct num *n;
};



int main()
{
    struct num v1,v2;
    v1.x=2;
    v1.y='N';
    v1.n=NULL;

    v2.x=3;
    v2.y='A';
    v2.n=NULL;

    v1.n=&v2;
    cout<<v1.n->x<<" "<<v1.n->y<<endl;
}
