#include<stdio.h>

int main(void)
{
    const int iNo = 10;
    const int *pPtr = &iNo;

    // iNo ++ ;            // error: l-value specifies const object (iNo is constant)

    // (*pPtr) ++ ;        // error: l-value specifies const object (pointing to constant)

    pPtr ++ ;              // allowed , pPtr is non constant
    printf("%d",pPtr);     // 6422300

    return 0;
}
