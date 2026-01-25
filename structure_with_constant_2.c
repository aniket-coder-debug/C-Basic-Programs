#include<stdio.h>

int main(void)
{
    int iNo = 10;
    const int *pPtr = &iNo;

    iNo++ ;                 // allowed , iNo is non constant
    printf("%d\n",iNo);     // 11

    // (*pPtr)++ ;          // error: increment of read-only location '*pPtr' (pointing to constant)

    pPtr++ ;                // allowed , pPtr is non constant
    printf("%d\n",pPtr);    // 6422300

    return 0;
}
