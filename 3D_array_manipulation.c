#include<stdio.h>

int main(void)
{
    int arr[3][2][4] = {10,20,30,40,50,60,70,80,90};

    printf("%d\n",arr[0]);                          // 6422208 100 (100-116)
    // 3D -> 0th 2D naw (1D address)

    printf("%d\n",arr[0][0]);                       // 6422208 100 (100-104)
    // 3D -> 0th 2D -> 0th 1D naw (ele address)

    printf("%d\n",arr[0][0][0]);                    // 10
    // 3D -> 0th 2D -> 0th 1D -> 0th ele naw (value)

    printf("%d\n",arr[1]);                          // 6422240 132 (132-148)
    // 3D -> 1st 2D naw (1D address)

    printf("%d\n",arr[1][0]);                       // 6422240 132 (132-136)
    // 3D -> 1st 2D -> 0th 1D naw (ele address)

    printf("%d\n",arr[1][0][0]);                    // 90
    // 3D -> 1st 2D -> 0th 1D -> 0th ele naw (value)

    printf("%d\n",arr[2]);                          // 6422272 164 (164-180)
    // 3D -> 2nd 2D naw (1D address)

    printf("%d\n",arr[2][0]);                       // 6422272 164 (164-168)
    // 3D -> 2nd 2D -> 0th 1D naw (ele address)

    printf("%d\n",arr[2][0][0]);                    // 0
    // 3D -> 2nd 2D -> 0th 1D -> 0th ele naw (value)

    printf("%d\n",arr[0] + 1);                      // 6422224 116
    // 3D -> 0th 2D naw (1D address) + 1 -> (1D size ne pudhe)

    printf("%d\n",arr[0][0] + 1);                   // 6422212 104
    // ele size ne pudhe

    printf("%d\n",arr[0][0][0] + 1);                // 11
    // value + 1

    printf("%d\n",arr[1] + 1);                      // 6422256 148
    // 3D -> 1st 2D naw (1D address) + 1 -> (1D size ne pudhe)

    printf("%d\n",arr[1][0] + 1);                   // 6422244 136
    // ele size ne pudhe

    printf("%d\n",arr[1][0][0] + 1);                // 91
    // value + 1

    printf("%d\n",arr[2] + 1);                      // 6422288 180
    // 3D -> 2nd 2D naw (1D address) + 1 -> (1D size ne pudhe)

    printf("%d\n",arr[2][0] + 1);                   // 6422276 168
    // ele size ne pudhe

    printf("%d\n",arr[2][0][0] + 1);                // 1
    // value + 1

    printf("%d\n",& arr);                           // 6422208 100 (100-196)
    // & 3D => 3D address

    printf("%d\n",arr);                             // 6422208 100 (100-132)
    // 3D naw => 2D address

    printf("%d\n",*arr);                            // 6422208 100 (100-116)
    // 3D chya nawala 1 * mhanje 2D ch naw ( 2D ch naw mhanje 1D cha address )

    printf("%d\n",**arr);                           // 6422208 100 (100-104)
    // 3D chya navala 2 * mhanje 1D ch naw ( 1D ch naw mhanje ele address )

    printf("%d\n",***arr);                          // 10
    // 3D chya navala 3 * mhanje ele ch naw ( ele ch naw mhanje (value) )

    printf("%d\n",& arr + 1);                       // 6422304 196
    // 3D size ne pudhe

    printf("%d\n",arr + 1);                         // 6422240 132
    // 3D cha naw mhanje 2D cha address (2D size ne pudhe)

    printf("%d\n",*arr + 1);                        // 6422224 116
    // 3D chya nawala 1 * mhanje 2D ch naw ( 2D ch naw mhanje (1D cha address)) -> 1D size ne pudhe

    printf("%d\n",**arr + 1);                       // 6422212 104
    // 3D chya navala 2 * mhanje 1D ch naw ( 1D ch naw mhanje ele address ) -> ele size ne pudhe

    printf("%d\n",***arr + 1);                      // 11
    // 3D chya navala 3 * mhanje ele ch naw ( ele ch naw mhanje (value) ) -> value + 1

    printf("%d\n",&(**arr));                        // 6422208 100 (100-116)
    // & (3D -> 2D -> 1D naw) => 1D address

    printf("%d\n",& (*arr) + 1);                    // 6422240 132
    // 1D size ne pudhe

    printf("%d\n",arr + 2);                         // 6422272 164
    // 2D size ne 2 da pudhe

    printf("%d\n",*(arr + 2));                      // 6422272 164 (164-180)
    // 3D -> 2nd 2D naw (1D address)

    printf("%d\n",*(arr + 2) + 1);                  // 6422288 180
    // 1D size ne pudhe

    printf("%d\n",*(*(arr + 2) + 1));               // 6422288 180 (180-184)
    // solving 1

    printf("%d\n",*(*(arr + 2) + 1) + 3);           // 6422300 192
    // ele size ne 3 da pudhe

    printf("%d\n",*(*(*(arr + 2) + 1) + 3));        // 0
    // solving 2

    return 0;
}

// solving 1:

// *(*(arr + 2) + 1)            // 3D naw (2D address)
// *(*(100 + 2 * sizeof(detatype)) + 1)
// *(*(100 + 2 * sizeof(2D)) + 1)
// *(*(100 + 2 * 32) + 1)
// *(*(100 + 64) + 1)           // 3D naw (2D address)
// *(*(164) + 1)                // 2D naw (1D address)
// *(164 + 1 * sizeof(detatype))
// *(164 + 1 * sizeof(1D))
// *(164 + 1 * 16)
// *(164 + 16)                  // 2D naw (1D address)
// *(180)                       // 1D naw (ele address)
// 180

// solving 2:

// *(*(*(arr + 2) + 1) + 3)     // 3D naw (2D address)
// *(*(*(100 + 2 * sizeof(detatype)) + 1) + 3)
// *(*(*(100 + 2 * sizeof(2D)) + 1) + 3)
// *(*(*(100 + 2 * 32) + 1) + 3)
// *(*(*(100 + 64) + 1) + 3)    // 3D naw (2D address)
// *(*(*(164) + 1) + 3)         // 2D naw (1D address)

// *(*(164 + 1 * sizeof(detatype)) + 3) 
// *(*(164 + 1 * sizeof(1D)) + 3) 
// *(*(164 + 1 * 16) + 3) 
// *(*(164 + 16) + 3)           // 2D naw (1D address)
// *(*(180) + 3)                // 1D naw (ele address)
// *(180 + 3 * sizeof(detatype))
// *(180 + 3 * sizeof(int))
// *(180 + 3 * 4)
// *(180 + 12)                  // 1D naw (ele address)
// *(192)                       // ele naw (value)
// 0
