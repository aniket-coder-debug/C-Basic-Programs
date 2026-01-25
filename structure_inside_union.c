#include<stdio.h>

union outer1
{
    int iNo;
    double dNo;

    struct inner1
    {
        int iNo;
        float fNo;
    }iobj1,iobj2;
}oObj1;

union outer2
{
    int iNo;
    float fNo;

    struct inner2
    {
        char chChar1;
        char chChar2;
    }iobj[4];
}oObj2;

int main(void)
{
    printf("outer1 sizeof = %d\n",sizeof(oObj1));   // 8
    printf("outer2 sizeof = %d\n",sizeof(oObj2));   // 8

    return 0;
}
