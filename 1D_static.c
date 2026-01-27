#include<stdio.h>
#define MAX 10

int main(void)
{
    int arr[MAX];
    int iNoOfElements;
    int iCounter;

    printf("How many elements you want to enter for array ?(< %d)\n",MAX);
    scanf("%d",&iNoOfElements);

    printf("\nEnter 1D array values:\n");
    for(iCounter = 0; iCounter < iNoOfElements; iCounter++)
    {
        printf("Enter arr[%d] value :\t",iCounter);
        scanf("%d",&arr[iCounter]);
    }

    printf("\nArray values are:\n");
    for(iCounter = 0; iCounter < iNoOfElements; iCounter++)
        printf("arr[%d] = %d\n",iCounter,arr[iCounter]);

    return 0;
}
