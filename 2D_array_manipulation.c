#include<stdio.h>

int main(void)
{
    int arr[3][4] = {10,20,30,40,50,60,70,80,90};

    printf("%d\n",& arr);                   // 6422256 (100 (100-148))
    // & 2D => 2D address

    printf("%d\n",arr);                     // 6422256 (100 (100-116))
    // 2D naw -> 1D address

    printf("%d\n",arr[0]);                  // 6422256 (100 (100-104))
    // 2D -> 0th 1D cha naw (ele address)

    printf("%d\n",arr[0][0]);               // 10
    // 2D -> 0th 1D -> 0th ele naw (value)

    printf("%d\n",& arr + 1);               // 6422304 (148)
    // & 2D => 2D size ne pudhe

    printf("%d\n",arr + 1);                 // 6422272 (116)
    // 2D naw -> 1D address (1D size ne pudhe)

    printf("%d\n",arr[0] + 1);              // 6422260 (104)
    // 2D -> 0th 1D naw (ele address)(ele size ne pudhe)

    printf("%d\n",arr[0][0] + 1);           // 11
    // 2D -> 0th 1D -> 0th ele naw (value)(value + 1)

    printf("%d\n",& arr[0]);                // 6422256 (100 (100-116))
    // 2D -> 0th 1D chya nawala & mhanje tya purn 1D ch address

    printf("%d\n",& arr[0] + 1);            // 6422272 (116)
    // 1D size ne pudhe

    printf("%d\n",& arr[0][0]);             // 6422256 (100 (100-104))
    // 2D -> 0th 1D -> 0th ele nawala & mhanje ele address

    printf("%d\n",& arr[0][0] + 1);         // 6422260 (104)
    // ele size ne pudhe

    printf("%d\n",arr[1]);                  // 6422272 (116 (116-120))
    // 2D -> 1st index 1D ch naw (ele address)

    printf("%d\n",arr[1][0]);               // 50
    // 2D -> 1st 1D -> 0th ele naw (value)

    printf("%d\n",arr[1] + 1);              // 6422276 (120)
    // ele size ne pudhe

    printf("%d\n",arr[1][0] + 1);           // 51
    // value + 1

    printf("%d\n",arr[2]);                  // 6422288 (132 (132-136))
    // 2D -> 2nd 1D ch naw (ele addr)

    printf("%d\n",arr[2][0]);               // 90
    // 2D -> 2nd 1D -> 0th ele naw (value)

    printf("%d\n",arr[2] + 1);              // 6422292 (136)
    // ele size ne pudhe

    printf("%d\n",arr[2][0] + 1);           // 91
    // value + 1

    printf("%d\n",& arr[2]);                // 6422288 (132 (132-148))
    // &(2D -> 2nd 1D naw) => 1D address

    printf("%d\n",& arr[2][0]);             // 6422288 (132 (132-136))
    // &(2D -> 2nd 1D -> 0th ele naw) => ele address

    printf("%d\n",& arr[2] + 1);            // 6422304 (148)
    // 1D size ne pudhe

    printf("%d\n",& arr[2][0] + 1);         // 6422292 (136)
    // ele size ne pudhe

    printf("%d\n",*arr);                    // 6422256 (100 (100-104))
    // 2D -> 1D naw (ele address)

    printf("%d\n",**arr);                   // 10
    // 2D -> 1D -> ele naw (value)

    printf("%d\n",*arr + 1);                // 6422260 (104)
    // ele size ne pudhe

    printf("%d\n",**arr + 1);               // 11
    // value + 1

    printf("%d\n",arr + 2);                 // 6422288 (132)
    // 1D size ne 2 da pudhe

    printf("%d\n",*(arr + 2));              // 6422288 (132)
    // solving 1

    printf("%d\n",*(arr + 2) + 3);          // 6422300 (144)
    // solving 2 (ele size ne 3 da pudhe)

    printf("%d\n",*(*(arr + 2) + 3));       // 0
    // solving 3

    return 0;
}

// solving 1:
// *(arr + 2)                   2D naw (1D address)
// *(100 + 2 * sizeof(detatype))
// *(100 + 2 * sizeof(1D))
// *(100 + 2 * 16)
// *(100 + 32)                  2D naw (1D address)
// *(132)                       1D naw (ele address)
// 132

// solving 2:
// *(arr + 2) + 3               2D naw (1D address)
// *(100 + 2 * sizeof(detatype) + 3)
// *(100 + 2 * sizeof(1D) + 3)
// *(100 + 2 * 16) + 3
// *(100 + 32) + 3              2D naw (1D address)
// *(132) + 3                   1D naw (ele address)
// 132 + 3 * sizeof(detatype)
// 132 + 3 * sizeof(int)
// 132 + 3 * 4
// 132 + 12                     ele size ne 3da pudhe
// 144

// solving 3:
// *(*(arr + 2) + 3)               2D naw (1D address)
// *(*(100 + 2 * sizeof(detatype) + 3))
// *(*(100 + 2 * sizeof(1D) + 3))
// *(*(100 + 2 * 16) + 3)
// *(*(100 + 32) + 3)             2D naw (1D address)
// *(*(132) + 3)                  1D naw (ele address)
// *(132 + 3 * sizeof(detatype))
// *(132 + 3 * sizeof(int))
// *(132 + 3 * 4)
// *(132 + 12)                    1D naw (ele address)
// *(144)                         ele naw (value)
// 0
