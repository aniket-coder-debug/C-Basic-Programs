#include<stdio.h>
#include<malloc.h>

int main(void)
{
    int *pPtr = NULL;
    int iCounter;
    int iNoOfElements;

    printf("How many elements you want to enter ? \n");
    scanf("%d",&iNoOfElements);

    pPtr = (int*) malloc (iNoOfElements * sizeof(int));
    if(NULL == pPtr)
    {
        printf("\nMemory allocation FAILED\n");
        return -1;
    }

    for(iCounter = 0; iCounter < iNoOfElements; iCounter++)
    {
        printf("Enter arr[%d] value :\t",iCounter);
        scanf("%d",&pPtr[iCounter]);
    }

    printf("\nElements are:\n");

    for(iCounter = 0; iCounter < iNoOfElements; iCounter++)
    {
        printf("arr[%d] value , %d\n",iCounter,pPtr[iCounter]);
    }
    if(pPtr != NULL)
    {
        free(pPtr);
        pPtr = NULL;
    }

    return 0;
}
