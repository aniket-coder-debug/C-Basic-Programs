#include<stdio.h>

int main(void)
{
    int arr[] = {10,20,30,40,50};
    int *pPtr[] = {arr , arr + 1 , arr + 2 , arr + 3 , arr + 4};
    int **ppPtr = & pPtr;                       //  warning : 'initializing' : 'int **' differs in levels of indirection from 'int *(*)

    printf("%d %d %d\n",arr,*arr,&arr);                             // 6422280 10 6422280 (100 10 100)
    printf("%d %d %d\n",pPtr,*pPtr,**pPtr);                         // 6422260 6422280 10 (200 100 10)
    printf("%d %d %d\n",ppPtr,*ppPtr,**ppPtr);                      // 6422260 6422280 10 (200 100 10)

    *ppPtr++ ;
    printf("%d %d %d\n" , ppPtr - pPtr , *ppPtr - arr , **ppPtr);   // 1  1  20

    *++ppPtr ;
    printf("%d %d %d\n" , ppPtr - pPtr , *ppPtr - arr , **ppPtr);   // 2  2  30

    ++*ppPtr ;
    printf("%d %d %d\n" , ppPtr - pPtr , *ppPtr - arr , **ppPtr);   // 2  3  40

    return 0;
}


// *ppPtr++ ;

// *(ppPtr++)
// ppPtr = ppPtr + 1 * sizeof(pointer)
//       = 200 + 1 * 4
//       = 200 + 4
//       = 204

// ppPtr - pPtr                             *ppPtr - arr                            **ppPtr => **204 => *104 => 20
// 204 - 200 / sizeof(int) => 4 / 4 => 1    104 - 100 / sizeof(int) => 4 / 4 => 1


// *++ppPtr ;

// *(++ppPtr)
// ppPtr = ppPtr + 1 * sizeof(pointer)
//       = 204 + 1 * 4
//       = 204 + 4
//       = 208

// ppPtr - pPtr                             *ppPtr - arr                            **ppPtr => **208 => *108 => 30
// 208 - 200 / sizeof(int) => 8 / 4 => 2    108 - 100 / sizeof(int) => 8 / 4 => 2


// ++*ppPtr ;

// ++(*ppPtr)
// *ppPtr = *ppPtr + 1
//        = 108 + 1 * sizeof(detatype)
//        = 108 + 1 * sizeof(int)
//        = 108 + 1 * 4
//        = 108 + 4
// *ppPtr = 112

// ppPtr - pPtr                     *ppPtr -arr                     **ppPtr => **208 => *112 => 40
// 208 - 200 / 4 => 8 / 4 => 2      112 - 100 / 4 => 12 / 4 => 3