#include<stdio.h>
#include<string.h>

int main(void)
{
    char szStr1[20];
    char szStr2[20];
    char *pPtr;

    printf("\nEnter The String:\t");                                        // hello good morning
    gets(szStr1);
    printf("\nEnter String To Be Found:\t");                                // good
    gets(szStr2);

    pPtr = strstr(szStr1,szStr2);

    if(NULL == pPtr)
    {
        puts("\nString Is Not Found\n");
    }
    else
    {
        printf("\nString Is Found At %d Location\n",(pPtr - szStr1) + 1);   // String Is Found At 7 Location
        printf("\nString Found In '%s'\n",pPtr);                            // String Found In 'good morning'
    }

    return 0;
}
