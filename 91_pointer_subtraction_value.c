#include<stdio.h>

int main(void)
{
    char arr[] = {'A','B','C','D','E'};

    char *pPtr = & arr[4];

    printf("%d\n",pPtr);            // 6422299 (104)
    printf("%c\n",*pPtr);           // E

    printf("%d\n",pPtr - 3);        // 6422296 (101)
    printf("%c\n",*(pPtr - 3));     // B

    printf("%d\n",pPtr);            // 6422299 (104)
    printf("%c\n",*pPtr);           // E

    return 0;
}
