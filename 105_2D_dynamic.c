#include<stdio.h>
#include<malloc.h>

int main(void)
{
    int iRows;
    int iColumns;
    int iCounter1;
    int iCounter2;
    int **ppPtr = NULL;

    printf("How many Rows(1D) you want to enter ? \n");
    scanf("%d",&iRows);
    printf("How many Columns(Elements) you want to enter ? \n");
    scanf("%d",&iColumns);

    ppPtr = (int**) malloc(iRows * sizeof(int*));
    if(NULL == ppPtr)
    {
        printf("Memory allocation FAILED\n");
        return -1;
    }

    for(iCounter1 = 0; iCounter1 < iRows; iCounter1++)
    {
        ppPtr[iCounter1] = (int*)malloc(iColumns * sizeof(int));
        if(NULL == ppPtr[iCounter1])
        {
            printf("Memory allocation FAILED\n");
            return -1;
        }

        for(iCounter2 = 0; iCounter2 < iColumns; iCounter2++)
        {
            printf("Enter arr[%d][%d] values :\t",iCounter1,iCounter2);
            scanf("%d",&ppPtr[iCounter1][iCounter2]);
        }
    }

    printf("\nElements are :\n");

    for(iCounter1 = 0; iCounter1 < iRows; iCounter1++)
    {
        for(iCounter2 = 0; iCounter2 < iColumns; iCounter2++)
        {
            printf("arr[%d][%d] = %d\n",iCounter1,iCounter2,ppPtr[iCounter1][iCounter2]);
        }
    }

    if(ppPtr != NULL)
    {
        for(iCounter1 = 0; iCounter1 < iRows; iCounter1++)
        {
            if(ppPtr[iCounter1] != NULL)
            {
                free(ppPtr[iCounter1]);
                ppPtr[iCounter1] = NULL;
            }
        }
        free(ppPtr);
        ppPtr = NULL;
    }

    return 0;
}
