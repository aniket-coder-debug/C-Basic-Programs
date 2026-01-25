#include<stdio.h>

extern int iNo;
int main(void)
{
    extern int iNo;           // allowed
    printf("%d",iNo);         // 10

    return 0;
}
int iNo = 10;

