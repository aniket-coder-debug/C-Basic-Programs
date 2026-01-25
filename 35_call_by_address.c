#include<stdio.h>

void Fun(int *pPtr);

int main(void)
{
    int iNo = 10;

    printf("In main , iNo is %d\n",iNo);            //  10

    Fun(&iNo);                                      //  call by address

    printf("Leaving main , iNo is %d\n",iNo);       //  11 (changes reflect)

    return 0;

}
void Fun(int *pPtr)
{
    printf("In Fun , iNo is %d\n",*pPtr);           //  10

    ++(*pPtr);

    printf("Leaving Fun , iNo is %d\n",*pPtr);      //  11

}
