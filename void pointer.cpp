#include<iostream>
using namespace std;
int main()
{
    int n; /*int n=10,*p=&n;*/
    cin>>n;
    void *p=&n;
    cout<<*(int *)p<<endl;
}
