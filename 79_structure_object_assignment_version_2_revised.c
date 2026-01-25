#include<stdio.h>

struct demo
{
    int iNo;
    float fNo;
};

void AssignObjects(const struct demo *pobj1, struct demo *pobj2, struct demo *pobj3);

int main(void)
{
    struct demo obj1;
    struct demo obj2;
    struct demo obj3;

    printf("\nEnter obj1 values:\n");
    printf("Enter Integer:\t");
    scanf("%d",&obj1.iNo);
    printf("Enter Float:\t");
    scanf("%f",&obj1.fNo);

    AssignObjects(&obj1,&obj2,&obj3);

    printf("\nOBJ1 values are:\n");
    printf("Integer is %d\n",obj1.iNo);
    printf("Float is %f\n",obj1.fNo);

    printf("\nOBJ2 values are:\n");
    printf("Integer is %d\n",obj2.iNo);
    printf("Float is %f\n",obj2.fNo);

    printf("\nOBJ3 values are:\n");
    printf("Integer is %d\n",obj3.iNo);
    printf("Float is %f\n",obj3.fNo);

    return 0;
}
void AssignObjects(const struct demo *pobj1, struct demo *pobj2, struct demo *pobj3)
{
    *pobj2 = *pobj1;

    (*pobj3).iNo = (*pobj1).iNo;
    (*pobj3).fNo = (*pobj1).fNo;

    // OR

    // pobj3 -> iNo = pobj1->iNo;
    // pobj3 -> fNo = pobj1->fNo;

}
