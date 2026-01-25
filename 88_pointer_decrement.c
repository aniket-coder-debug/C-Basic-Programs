#include<stdio.h>

int main(void)
{
    double arr[] = {99.99,88.88,77.77,66.66,55.55};
    double *pPtr = &arr[4];

    printf("%d\n",pPtr);        // 6422288 (132)
    printf("%lf\n",*pPtr);      // 55.550000

    --pPtr ;

    printf("%d\n",pPtr);        // 6422280 (124)
    printf("%lf\n",*pPtr);      // 66.660000

    return 0;
}
