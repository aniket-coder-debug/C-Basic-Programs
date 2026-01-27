#include<stdio.h>

int main(void)
{
    int *pPtr = NULL;
    {
        int iNo = 10;
        pPtr = &iNo;

        printf("%d\n",*pPtr);       // 10
    }

    printf("%d\n",*pPtr);           // 10 (dangling pointer)

    return 0;
}
