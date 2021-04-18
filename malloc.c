#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int *p=(int *)malloc(n*sizeof(int));
    if(p==NULL)
        printf("Memory is not allocated successfully \n");
    for(i=0;i<n;i++)
        scanf("%d",p+i);
    for(i=0;i<n;i++)
        printf("%d ",*(p+i));
}
