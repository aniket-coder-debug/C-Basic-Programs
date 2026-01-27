#include<stdio.h>
#include<malloc.h>

int main(void)
{
    int iPlanes;
    int iRows;
    int iColumns;
    int iCounter1;
    int iCounter2;
    int iCounter3;
    int ***pppPtr = NULL;

    printf("How many planes(2D) you want to enter ?\n");
    scanf("%d",&iPlanes);
    printf("How many Rows(1D) you want to enter ?\n");
    scanf("%d",&iRows);
    printf("How many Columns(Elements) you want to enter ?\n");
    scanf("%d",&iColumns);

    pppPtr = (int***) malloc(iPlanes * sizeof(int**));
    if(NULL == pppPtr)
    {
        printf("Memory allocation FAILED\n");
        return -1;
    }

    for(iCounter1 = 0; iCounter1 < iPlanes; iCounter1++)
    {
        pppPtr[iCounter1] = (int**) malloc (iRows * sizeof(int*));
        if(NULL == pppPtr)
        {
            printf("Memory allocation FAILED\n");
            return -1;
        }

        for(iCounter2 = 0; iCounter2 < iRows; iCounter2++)
        {
            pppPtr[iCounter1][iCounter2] = (int*) malloc (iColumns * sizeof(int));
            if(NULL == pppPtr)
            {
                printf("Memory allocation FAILED\n");
                return -1;
            }

            for(iCounter3 = 0; iCounter3 < iColumns; iCounter3++)
            {
                printf("Enter arr[%d][%d][%d] values :\t",iCounter1,iCounter2,iCounter3);
                scanf("%d",&pppPtr[iCounter1][iCounter2][iCounter3]);
            }
        }

    }

    printf("\nElements are :\n");

    for(iCounter1 = 0; iCounter1 < iPlanes; iCounter1++)
    {
        for(iCounter2 = 0; iCounter2 < iRows; iCounter2++)
        {
            for(iCounter3 = 0; iCounter3 < iColumns; iCounter3++)
            {
                printf("arr[%d][%d][%d] = %d\n",iCounter1,iCounter2,iCounter3,pppPtr[iCounter1][iCounter2][iCounter3]);
            }
        }
    }

    if(pppPtr != NULL)
    {
        for(iCounter1 = 0; iCounter1 < iPlanes; iCounter1++)
        {
            if(pppPtr[iCounter1] != NULL)
            {
                for(iCounter2 = 0; iCounter2 < iRows; iCounter2++)
                {
                    if(pppPtr[iCounter1][iCounter2] != NULL)
                    {
                        free(pppPtr[iCounter1][iCounter2]);
                        pppPtr[iCounter1][iCounter2] = NULL;
                    }
                }
            }

            free(pppPtr[iCounter1]);
            pppPtr[iCounter1] = NULL;
        }
    }
    
    free(pppPtr);
    pppPtr = NULL;

    return 0;
}
