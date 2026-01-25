#include<stdio.h>

int main(void)
{
    int iNo = 10;
    int *const pPtr = &iNo;

    iNo++ ;                 // allowed , iNo is non constant
    printf("%d\n",iNo);     // 11

    (*pPtr)++ ;             // allowed , pointing to non constant
    printf("%d\n",(*pPtr)); // 12

    // pPtr++ ;             // error: increment of read-only variable 'pPtr' (pPtr is constant)

    return 0;
}
