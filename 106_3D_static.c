#include<stdio.h>
#define MAX 10

int main(void)
{
    int arr[MAX][MAX][MAX];
    int iPlanes;
    int iRows;
    int iColumns;
    int iCounter1;
    int iCounter2;
    int iCounter3;

    printf("How many planes(2D) you want to enter ?(< %d)\n",MAX);
    scanf("%d",&iPlanes);
    printf("How many Rows(1D) you want to enter ?(< %d)\n",MAX);
    scanf("%d",&iRows);
    printf("How many Columns(Elements) you want to enter ?(< %d)\n",MAX);
    scanf("%d",&iColumns);

    printf("\nEnter 3D array values:\n\n");
    for(iCounter1 = 0; iCounter1 < iPlanes; iCounter1++)
    {
        for(iCounter2 = 0; iCounter2 < iRows; iCounter2++)
        {
            for(iCounter3 = 0; iCounter3 < iColumns; iCounter3++)
            {
                printf("Enter arr[%d][%d][%d] values:\t",iCounter1,iCounter2,iCounter3);
                scanf("%d",&arr[iCounter1][iCounter2][iCounter3]);
            }
        }
    }

    printf("\nArray values are:\n\n");
    for(iCounter1 = 0; iCounter1 < iPlanes; iCounter1++)
    {
        for(iCounter2 = 0; iCounter2 < iRows; iCounter2++)
        {
            for(iCounter3 = 0; iCounter3 < iColumns; iCounter3++)
            {
                printf("arr[%d][%d][%d] = %d\n",iCounter1,iCounter2,iCounter3,arr[iCounter1][iCounter2][iCounter3]);
            }
        }
    }

    return 0;
}
