#include<stdio.h>

struct outer1
{
    int iNo;
    float fNo;

    union inner1
    {
        int iNo;
        float fNo;
    }iobj1,iobj2;

    double dNo;
}oObj1;

struct outer2
{
    int iNo;
    double dNo;

    union inner2
    {
        int iNo;
        double dNo;
    }iobj[2];
}oObj2;

int main(void)
{
    printf("outer1 sizeof = %d\n",sizeof(oObj1));   // 24
    printf("outer2 sizeof = %d\n",sizeof(oObj2));   // 32

    return 0;
}
