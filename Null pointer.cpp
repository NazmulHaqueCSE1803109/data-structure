#include<iostream>
using namespace std;
int main()
{
    int *p=NULL;/* null pointer is a pointer which did not point any memory location.
                 that means NULL value is assigned to it.*/
    p=(int *)malloc(sizeof(int));
    if(p==NULL)
        cout<<"memory is not allocated successfully."<<endl;
    else
        cout<<"memory is allocated successfully."<<endl;
    cout<<sizeof(NULL);
    cout<<sizeof(malloc(2));
}
