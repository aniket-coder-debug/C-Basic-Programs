#include<stdio.h>

int main(void)
{
    int iNo = 10;
    int const *const pPtr = &iNo;

    iNo++ ;                 // allowed , iNo is non constant
    printf("%d\n",iNo);     // 11

    // (*pPtr)++ ;          // error: increment of read-only location '*pPtr' (pointing to constant)

    // pPtr++ ;             // error: increment of read-only variable 'pPtr' (pPtr is constant)

    return 0;
}
