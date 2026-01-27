#include<stdio.h>
#include<string.h>
#define MAX 50

int main(void)
{
    FILE *fp = NULL;
    char szText[MAX];

    fp = fopen("keyboard_to_file.csv","w");

    if(NULL == fp)
    {
        printf("cant open file\n");
        return -1;
    }

    printf("\nEnter Strings:\n");
    while(strlen(gets(szText)) > 0 )
    {
        fputs(szText,fp);
        fputs("\n",fp);
    }

    fclose(fp);
    fp = NULL;

    return 0;
}
