#include<stdio.h>
#include<string.h>

int main(void)
{
    char szStr[20];
    char chChar;
    char *pPtr;

    printf("\nEnter The String:\t");
    gets(szStr);                                                                // how are you
    printf("\nEnter Charcter To Be Found:\t");
    scanf("%c",&chChar);                                                        // y

    pPtr = strrchr(szStr,chChar);

    if(NULL == pPtr)
        printf("\nCharacter Is Not Found\n");
    else
        printf("\nCharacter Is Found At %d Location\n",(pPtr - szStr) + 1);     // Character Is Found At 9 Location

    return 0;
}
