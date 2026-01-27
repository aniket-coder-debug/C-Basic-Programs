#include<stdio.h>

int main(void)
{
    int arr[] = {10,20,30,40,50};

    printf("%d\n",& arr);                   // 6422284  (100 (100-120))
    // &1D => 1D address

    printf("%d\n",arr);                     // 6422284  (100 (100-104))
    // 1D naw => ele address

    printf("%d\n",arr[0]);                  // 10
    // 1D -> 0th element naw (value)

    printf("%d\n",arr[0] + 1);              // 11
    // value + 1

    printf("%d\n",arr + 1);                 // 6422288 (104)
    // element size ne pudhe

    printf("%d\n",& arr + 1);               // 6422304 (120)
    // 1D size ne pudhe

    printf("%d\n",*arr);                    // 10
    // 1D array chya navala 1 * mhanje (value)

    printf("%d\n",*arr + 1);                // 11
    // value + 1

    printf("%d\n",*(arr + 1));              // 20
    // solving 

    return 0;
}

// solving :
// *(arr + 1)                   // 1D naw (ele addr)
// *(100 + 1 * sizeof(detatype))
// *(100 + 1 * sizeof(int))
// *(100 + 1 * 4)
// *(100 + 4)                   // 1D naw (ele addr)
// *(104)                       // ele naw (value)
// 20
