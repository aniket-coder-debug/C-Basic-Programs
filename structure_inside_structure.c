#include<stdio.h>

struct outer1
{
    int iNo1;
    float fNo1;

    struct inner1
    {
        int iNo2;
        float fNo2;
    };

}oObj1;

struct outer2
{
    int iNo;
    float fNo;

    struct inner2
    {
        int iNo;
        float fNo;
    }iobj;

}oObj2;

struct outer3
{
    int iNo;
    float fNo;

    struct inner3
    {
        int iNo;
        double dNo;
    }iobj1,iobj2;

}oObj3;

struct outer4
{
    int iNo;
    float fNo;

    struct inner4
    {
        int iNo;
        float fNo;
    }iobj1,iobj2,iobj3;

}oObj4;

struct outer5
{
    int iNo;
    float fNo;

    struct inner5
    {
        int iNo;
        float fNo;
    }iobj[3];

}oObj5;

int main(void)
{
    printf("outer1 sizeof = %d\n",sizeof(oObj1));   // 16
    printf("outer2 sizeof = %d\n",sizeof(oObj2));   // 16 
    printf("outer3 sizeof = %d\n",sizeof(oObj3));   // 40
    printf("outer4 sizeof = %d\n",sizeof(oObj4));   // 32
    printf("outer5 sizeof = %d\n",sizeof(oObj5));   // 32

    return 0;
}

