#include<stdio.h>

int main(void)
{
    FILE *fp = NULL;

    int iNoOfChars = 0;
    int iNoOfSpaces = 0;
    int iNoOfTabs = 0;
    int iNoOfLines = 0;

    char chChar;

    fp = fopen("chars_spaces_tabs_newline_count.txt","r");

    if(NULL == fp)
    {
        printf("cant open the file");
        return -1;
    }

    while(1)
    {
        chChar = fgetc(fp);
        if(chChar == EOF)
            break;

        iNoOfChars++;

        if(chChar == ' ')
            iNoOfSpaces++;

        else if(chChar == '\t')
            iNoOfTabs++;

        else if(chChar == '\n')
            iNoOfLines++;
    }

    fclose(fp);
    fp = NULL;

    printf("\nNo Of Characters are %d\n",iNoOfChars);
    printf("\nNo Of Spaces are %d\n",iNoOfSpaces);
    printf("\nNo Of Tabs are %d\n",iNoOfTabs);
    printf("\nNo Of Lines are %d\n",iNoOfLines);

    return 0;
}
