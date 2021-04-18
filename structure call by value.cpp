#include<iostream>
using namespace std;

struct num{
  int x,y;
};


void input(struct num *n)
{
    scanf("%d %d",&n->x,&n->y);
}

void print(struct num n)
{
    printf("%d %d",n.x,n.y);
}

int main()
{
  struct num n;
  input(&n);
  print(n);
}
