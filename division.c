#include<stdio.h>

int main(void)
{
    printf("%d/%d=%d\n",9,2,9/2);                       //  9 / 2 = 4
    printf("%d/%d=%d\n",9,-2,9/-2);                     //  9 / -2 = -4
    printf("%d/%d=%d\n",-9,2,-9/2);                     //  -9 / 2 = -4
    printf("%d/%d=%d\n",-9,-2,-9/-2);                   //  -9 / -2 = 4

    return 0;
}

