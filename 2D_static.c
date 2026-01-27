#include<stdio.h>
#define MAX 10

int main(void)
{
    int arr[MAX][MAX];
    int iRows;
    int iColumns;
    int iCounter1;
    int iCounter2;

    printf("How many Rows(1D) you want to enter ?(< %d)\n",MAX);
    scanf("%d",&iRows);
    printf("How many Columns(Elements) you want to enter ?(< %d)\n",MAX);
    scanf("%d",&iColumns);

    printf("\nEnter 2D array values:\n");
    for(iCounter1 = 0; iCounter1 < iRows; iCounter1++)
    {
        for(iCounter2 = 0; iCounter2 < iColumns; iCounter2++)
        {
            printf("Enter arr[%d][%d] values :\t",iCounter1,iCounter2);
            scanf("%d",&arr[iCounter1][iCounter2]);
        }
    }

    printf("\nArray values are:\n");
    for(iCounter1 = 0; iCounter1 < iRows; iCounter1++)
    {
        for(iCounter2 = 0; iCounter2 < iColumns; iCounter2++)
            printf("arr[%d][%d] = %d\n",iCounter1,iCounter2,arr[iCounter1][iCounter2]);
    }

    return 0;
}
