#include<stdio.h>

int main(void)
{
    int iNo = 10;
    void *pPtr = &iNo;

    printf("%d\n",iNo);             // 10
    printf("%d\n",&iNo);            // 6422300 (100)
    printf("%d\n",pPtr);            // 6422300 (100)
    printf("%d\n",&pPtr);           // 6422296 (200)

    // printf("%d\n",*pPtr);        // error: invalid use of void expression (tyala sangav lagal na konala point karaychy te)
    printf("%d\n",*(int*)pPtr);     // 10 (ithala (int*) ya line purtach maryadit ahe)

    return 0;
}
