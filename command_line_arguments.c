#include<stdio.h>

int main(int argc,char * argv[])
{
    int iCounter;

    printf("Argument count is %d\n",argc);          // Argument count is 3
    printf("Argument values are :\n\n");            // 138_command_line_arguments.exe   10  20

    for(iCounter = 0; iCounter < argc; iCounter++)
        puts(argv[iCounter]);

    return 0;
}
