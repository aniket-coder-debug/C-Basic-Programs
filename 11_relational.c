#include<stdio.h>

int main(void)
{
    printf("10 > 20 = %d\n",10 > 20);                  // 0
    printf("10 < 20 = %d\n",10 < 20);                  // 1

    printf("10 <= 20 = %d\n",10 <= 20);                // 1
    printf("10 >= 20 = %d\n",10 >= 20);                // 0

    printf("10 == 10 = %d\n",10 == 10);                // 1

    printf("10 != 10 = %d\n",10 != 10);                // 0

    printf("10 == 20 = %d\n",10 == 20);                // 0

    printf("10 != 20 = %d\n",10 != 20);                // 1
    
    printf("10 < 20 != 1 = %d\n",10 < 20 != 1);        // 0
    printf("10 > 20 == 1 = %d\n",10 > 20 == 1);        // 0

    return 0;
}
