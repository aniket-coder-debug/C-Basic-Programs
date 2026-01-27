#include<stdio.h>

int main(int argc , char * argv[])          // values 20 30
{
    int iAns;

    if(argc != 3)
    {
        printf("Invalid arguments : $ prog_name value_1 value_2");
        return -1;
    }

    iAns = atoi(argv[1]) + atoi(argv[2]);

    printf("\nAnswer is %d\n",iAns);        // Answer is 50

    return 0;
}
