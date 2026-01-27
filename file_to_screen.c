#include<stdio.h>
#define MAX 50

int main(void)
{
    FILE *fp = NULL;
    char szText[MAX];

    fp = fopen("file_to_screen.txt","r");

    if(NULL == fp)
    {
        printf("\nCant Open File\n");
        return -1;
    }

    while(fgets(szText,MAX - 1,fp) != NULL)
    {
        printf("%s",szText);
    }

    fclose(fp);
    fp = NULL;

    return 0;
}
