#include<stdio.h>

#define MAX 10

void AssignmentArrays(int[] , int[] , int);

int main(void)
{
    int arr1[MAX];
    int arr2[MAX];
    int iCounter;
    int iNoOfElements;

    printf("How many elements you want to enter ? (< %d)\n",MAX);
    scanf("%d",&iNoOfElements);

    printf("\nEnter array values :\n\n");
    for(iCounter = 0; iCounter < iNoOfElements; iCounter++)
    {
        printf("Enter arr[%d] values :\t",iCounter);
        scanf("%d",&arr1[iCounter]);
    }

    printf("\nBefore Assignment :-\n\nArray 1 values are :\n");
    for(iCounter = 0; iCounter < iNoOfElements; iCounter++)
        printf("arr1[%d] = %d\n",iCounter,arr1[iCounter]);

    printf("\nArray 2 values are :\n\n");
    for(iCounter = 0; iCounter < iNoOfElements; iCounter++)
        printf("arr2[%d] = %d\n",iCounter,arr2[iCounter]);

    AssignmentArrays(arr1,arr2,iNoOfElements);

    printf("\nAfter Assignment :-\n\nArray 1 values are :\n");
    for(iCounter = 0; iCounter < iNoOfElements; iCounter++)
        printf("arr1[%d] = %d\n",iCounter,arr1[iCounter]);

    printf("\nArray 2 values are :\n");
    for(iCounter = 0; iCounter < iNoOfElements; iCounter++)
        printf("arr2[%d] = %d\n",iCounter,arr2[iCounter]);

    return 0;

}
void AssignmentArrays(int arr1[] , int arr2[] , int iNoOfElements)
{
    int iCounter;

    for(iCounter = 0; iCounter < iNoOfElements; iCounter++)
    {
        arr2[iCounter] = arr1[iCounter];
    }
}
