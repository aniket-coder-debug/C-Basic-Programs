#include<stdio.h>

int main(int argc , char * argv[] , char * envp[])
{
    int iCounter;

    printf("\nEnvironment settings are :\n\n");         // Laptop chya saglya Environment settings print hotat

    for(iCounter = 0; envp[iCounter] != NULL; iCounter++)
    {
        puts(envp[iCounter]);
    }

    return 0;
}
