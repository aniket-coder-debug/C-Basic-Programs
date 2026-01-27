#include<stdio.h>
#include<string.h>

int main(void)
{
    char szSource[20];
    char szDestination[40];

    printf("\nEnter Destination string :\t");
    gets(szDestination);                            // my name is aniket
    printf("\nEnter Source string :\t");
    gets(szSource);                                 // parbhane

    strcat(szDestination,szSource);

    printf("\n\nConcatenated String is:\t");
    puts(szDestination);                            // my name is aniketparbhane

    return 0;
}
