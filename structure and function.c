#include<stdio.h>

struct student{
   char name[50];
   int age;
   int roll;
   float marks;
};


void input(char *name,int *age,int *roll,float *marks)
{
    printf("please enter the values : ");
    scanf("%s %d %d %f",name,age,roll,marks);
}

void print(char name[],int age,int roll, float marks)
{
    printf("the entered values are : ");
    printf("%s %d %d %.2f", name,age,roll,marks);
}

int main()
{
    /* w-1: struct student s={"nazmul",21,1803109,75.4};
    printf("%s %d %d %.2f",s.name,s.age,s.roll,s.marks);*/
    struct student s;
    input(&s.name,&s.age,&s.roll,&s.marks);
    print(s.name,s.age,s.roll,s.marks);
    return 0;
}
