#include<stdio.h>

int main(void)
{
    int iNo = 10;
    int *pPtr = &iNo;

    printf("%d\n",pPtr);    // 6422296

    iNo++ ;                 // allowed , iNo is non constant
    printf("%d\n",iNo);     // 11

    (*pPtr)++ ;             // allowed , pointing to non constant
    printf("%d\n",(*pPtr)); // 12

    pPtr++ ;                // allowed , pPtr is non constant
    printf("%d\n",pPtr);    // 6422300

    return 0;

}
