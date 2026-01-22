#include<stdio.h>

int main(void)
{
    printf("1 && 1 = %d\n",1 && 1);                // 1
    printf("1 && 0 = %d\n",1 && 0);                // 0

    printf("1 || 0 = %d\n",1 || 0);                // 1
    printf("1 || 1 = %d\n",1 || 1);                // 1
    printf("0 || 0 = %d\n",0 || 0);                // 0

    printf("!0 = %d\n",!0);                        // 1

    printf("10 && 20 = %d\n",10 && 20);            // 1
    printf("10 && -20 = %d\n",10 && -20);          // 1

    printf("10 || -20 = %d\n",10 || -20);          // 1
    printf("-10 || -20 = %d\n",-10 || -20);        // 1

    printf("!10 = %d\n",!10);                      // 0
    printf("!-10 = %d\n",!-10);                    // 0

    return 0;
}
