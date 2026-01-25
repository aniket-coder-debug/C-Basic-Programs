#include<stdio.h>

int main(void)
{
    int arr[] = {10,20,30,40,50};

    printf("%d\n",arr);                                // 6422284
    //  1D ch naw => element address

    printf("%d\n",&arr);                               // 6422284
    //  &1D => 1D address

    printf("%d\n",arr + 1);                            // 6422288
    //  element size ne pudhe

    printf("%d\n",&arr + 1);                           // 6422304
    //  1D size ne pudhe

    printf("%d\n",arr[2]);                             // 30
    //  1D -> 2nd element cha naw (value)

    printf("%d\n",arr[2] + 1);                         // 31
    //  value + 1

    printf("%d\n",&arr[2]);                            // 6422292
    //  &( 1D-> 2nd element naw ) => element address

    printf("%d\n",&arr[2] + 1);                        // 6422296
    //  element size ne pudhe

    printf("%d\n",arr[0]);                             // 10
    //  1D -> 0th element naw (value)

    printf("%d\n",arr[0] + 1);                         // 11
    //  value + 1

    printf("%d\n",&arr[0]);                            // 6422284
    //  &( 1D -> 0th element naw ) => element address

    printf("%d\n",&arr[0] + 1);                        // 6422288
    //  element size ne pudhe

    //printf("%d\n",++arr);                            // error: L value required as increment operand
    //  arr = arr + 1 => 100 = 100 + 1 => 100 = 104

    //printf("%d\n",arr++);                            // error: L value required as increment operand
    //  arr = arr + 1 => 100 = 100 + 1 => 100 = 104

    return 0;
}

