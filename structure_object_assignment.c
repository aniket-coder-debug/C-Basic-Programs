#include<stdio.h>

struct demo
{
    int iNo;
    float fNo;
};

int main(void)
{
    struct demo obj1;
    struct demo obj2;
    struct demo obj3;

    printf("Enter obj1 values:\n");
    printf("Enter Integer:\t");
    scanf("%d",&obj1.iNo);
    printf("Enter Float:\t");
    scanf("%f",&obj1.fNo);

    obj2 = obj1;

    obj3.iNo = obj1.iNo;
    obj3.fNo = obj1.fNo;

    printf("\nOBJ1 values are,\n\n");
    printf("Integer is %d\n",obj1.iNo);
    printf("Float is %f\n",obj1.fNo);

    printf("\nOBJ2 values are,\n\n");
    printf("Integer is %d\n",obj2.iNo);
    printf("Float is %f\n",obj2.fNo);

    printf("\nOBJ3 values are,\n\n");
    printf("Integer is %d\n",obj3.iNo);
    printf("Float is %f\n",obj3.fNo);

    return 0;
}
