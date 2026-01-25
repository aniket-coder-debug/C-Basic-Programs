#include<stdio.h>

int main(void)
{
    int iNo = 10;
    int *pPtr;
    pPtr = &iNo;

    printf("%d\n",iNo);         // 10
    printf("%d\n",&iNo);        // 6422300 (100)

    printf("%d\n",pPtr);        // 6422300 (100)
    printf("%d\n",&pPtr);       // 6422296 (200)

    printf("%d\n",*pPtr);       // 10

    *pPtr = 20;

    printf("%d\n",*pPtr);       // 20
    printf("%d\n",iNo);         // 20

    return 0;
}
