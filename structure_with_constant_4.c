#include<stdio.h>

int main(void)
{
    const int iNo = 10;
    int *pPtr = &iNo;

    // iNo++ ;              // error: l-value specifies const object (iNo is constant)

    (*pPtr)++ ;             // allowed , pointing to non constant (pointer is very enosant ani tyach veles very powerfull)
    printf("%d\n",(*pPtr)); // 11

    pPtr++ ;                // allowed , pPtr is non constant
    printf("%d\n",pPtr);    // 6422300

    return 0;
}
