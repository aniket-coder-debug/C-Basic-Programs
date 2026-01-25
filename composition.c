#include<stdio.h>

struct inner
{
    int iNo;
    float fNo;
};

struct outer
{
    int iNo;
    float fNo;
    struct inner iobj;
}oObj;

int main(void)
{
    printf("outer sizeof = %d\n",sizeof(oObj));     // 16
    return 0;
}
