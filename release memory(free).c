#include<stdio.h>
#include<stdlib.h>

int *input()
{
    int i, *p=(int *)malloc(5*sizeof(int));
    if(p==NULL)
        printf("memory is not allocated successfully.\n");
    for(i=0;i<5;i++)
        scanf("%d",p+i);
    return p;
}

int main()
{
    int i,s=0;
    int *p=input();
    for(i=0;i<5;i++)
        s +=*(p+i);
    printf("the sumation of 5 number is : %d ",s);
    free(p);/*dangling pointer because after free memory it point that memory.*/
    p=NULL;
    return 0;
}
