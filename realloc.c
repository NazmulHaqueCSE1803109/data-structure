#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i;

    int *p=(int *)malloc(2*sizeof(int));
    if(p==NULL)
        printf("memory is not allocated successfully.\n");
    printf("Enter two values : ");
    for(i=0;i<2;i++)
        scanf("%d",p+i);
    p=(int *)realloc(p,4*sizeof(int));
    if(p==NULL)
        printf("memory is not allocated succesfully.\n");
    printf("Enter another two values : ");
    for(i=2;i<4;i++)
        scanf("%d",p+i);
    for(i=0;i<4;i++)
        printf("%d ",*(p+i));
    free(p);
    return 0;
}
