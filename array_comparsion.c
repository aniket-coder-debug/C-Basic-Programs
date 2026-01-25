#include<stdio.h>

#define MAX 10

int CompareArrays(int[] , int [] , int);

int main(void)
{
    int iRet;
    int iCounter;
    int arr1[MAX];
    int arr2[MAX];
    int iNoOfElements1;
    int iNoOfElements2;

    printf("How many elements you want to enter for array 1 ?(< %d)\n",MAX);
    scanf("%d",&iNoOfElements1);
    printf("How many elements you want to enter for array 2 ?(< %d)\n",MAX);
    scanf("%d",&iNoOfElements2);

    if(iNoOfElements1 != iNoOfElements2)
    {
        printf("Arrays will not be equal\n");
        return 0;
    }

    printf("\nEnter array 1 values :\n\n");
    for(iCounter = 0; iCounter < iNoOfElements1; iCounter++)
    {
        printf("Enter arr1[%d] value :\t",iCounter);
        scanf("%d",&arr1[iCounter]);
    }

    printf("\nEnter array 2 values :\n\n");
    for(iCounter = 0; iCounter < iNoOfElements1; iCounter++)
    {
        printf("Enter arr2[%d] value :\t",iCounter);
        scanf("%d",&arr2[iCounter]);
    }

    iRet = CompareArrays(arr1,arr2,iNoOfElements1);

    if(iRet == 1)
        printf("\nArrays are equal\n");
    else
        printf("\nArrays are not equal\n");

    return 0;
}

int CompareArrays(int arr1[] , int arr2 [] , int iNoOfElements)
{
    int iCounter;

    for(iCounter = 0; iCounter < iNoOfElements; iCounter++)
    {
        if(arr1[iCounter] != arr2[iCounter])
            return 0;
    }

    return 1;
}
