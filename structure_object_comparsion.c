#include<stdio.h>

struct demo
{
    int iNo;
    float fNo;
};

int CompareObjects(struct demo,struct demo);

int main(void)
{
    int iResult;
    struct demo obj1;
    struct demo obj2;

    printf("Enter obj1 values:\n");
    printf("Enter Integer:\t");
    scanf("%d",&obj1.iNo);
    printf("Enter Float:\t");
    scanf("%f",&obj1.fNo);

    printf("Enter obj2 values:\n");
    printf("Enter Integer:\t");
    scanf("%d",&obj2.iNo);
    printf("Enter Float:\t");
    scanf("%f",&obj2.fNo);

    printf("\nobj1 values are,\n");
    printf("Integer is %d\n",obj1.iNo);
    printf("Float is %f\n",obj1.fNo);

    printf("\nobj2 values are,\n");
    printf("Integer is %d\n",obj2.iNo);
    printf("Float is %f\n",obj2.fNo);

    iResult = CompareObjects(obj1,obj2);
    if(iResult == 1)
        printf("\nobjects are equal\n");
    else
        printf("\nobjects are not equal\n");

    return 0;
}
int CompareObjects(struct demo obj1,struct demo obj2)
{
    if(obj1.iNo == obj2.iNo && obj1.fNo == obj2.fNo)
        return 1;
    else
        return 0;
}
