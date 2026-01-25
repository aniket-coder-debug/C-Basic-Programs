#include<stdio.h>

int main(void)
{
    float arr[] = {10.10f,20.20f,30.30f,40.40f,50.50f};
    float *pPtr = & arr[0];

    printf("%d\n",pPtr);            // 6422280 (100)
    printf("%f\n",*pPtr);           // 10.10

    printf("%d\n",pPtr + 3);        // 6422292 (112)
    printf("%f\n",*(pPtr + 3));     // 40.40

    printf("%d\n",pPtr);            // 6422280 (100)
    printf("%f\n",*pPtr);           // 10.10

    return 0;
}
