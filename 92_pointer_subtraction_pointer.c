#include<stdio.h>

int main(void)
{
    int arr[] = {10,20,30,40,50};

    int *pPtr1 = &arr[0];
    int *pPtr2 = &arr[4];

    printf("%d\n",pPtr1);           // 6422276 (100)
    printf("%d\n",pPtr2);           // 6422292 (116)

    printf("%d\n",pPtr1 - pPtr2);   // -4 (negative value aali ki 1st address chota ahe samzaych)
    printf("%d\n",pPtr2 - pPtr1);   // 4  (positive value aali ki 1st address motha ahe samzaych)

    return 0;
}
