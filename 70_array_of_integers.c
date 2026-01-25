#define MAX 3
#include<stdio.h>

int main(void)
{
    int arr[MAX];
    int iCounter;

    for(iCounter = 0; iCounter < MAX; iCounter++)
    {
        printf("Enter value %d :\t",iCounter + 1);
        scanf("%d",&arr[iCounter]);
    }

    for(iCounter = 0; iCounter < MAX; iCounter++)
        printf("value %d is %d\n",iCounter + 1,arr[iCounter]);

    return 0;
}
 