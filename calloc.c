#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    int *p=(int *)calloc(10,sizeof(int));
    if(p==NULL)
        printf("memory is not allocated successfully.\n");
    for(i=0;i<n;i++)
        scanf("%d",p+i);
    for(i=0;i<n;i++)
        printf("%d ",*(p+i));
    free(p);
    return 0;
}
