#include<stdio.h>

int main(void)
{
    printf("28 & 14 = %d\n",28 & 14);             // 12
    printf("28 | 14 = %d\n",28 | 14);             // 30
    printf("28 ^ 14 = %d\n",28 ^ 14);             // 18
    printf(" ~28 = %d\n", ~28);                   // -29

    printf("4 << 1 = %d\n",4 << 1);               // 8
    printf("4 >> 1 = %d\n",4 >> 1);               // 2
    printf("20 << 2 = %d\n",20 << 2);             // 80
    printf("20 >> 2 = %d\n",20 >> 2);             // 5

    return 0;
}
