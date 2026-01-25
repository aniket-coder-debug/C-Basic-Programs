#include<stdio.h>

int main(void)
{
    int arr[] = {10,20,30,40,50};
    int *pPtr = & arr[0];

    printf("%d\n",&pPtr);       // 6422280 (200)
    printf("%d\n",pPtr);        // 6422284 (100)
    printf("%d\n",*pPtr);       // 10

    ++pPtr ;

    printf("%d\n",&pPtr);       // 6422280 (200)
    printf("%d\n",pPtr);        // 6422288 (104)
    printf("%d\n",*pPtr);       // 20

    return 0;
}
