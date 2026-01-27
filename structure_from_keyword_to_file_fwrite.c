#include<stdio.h>

struct student
{
    char szName[40];
    int iRollNo;
    float fPerc;
};

int main(void)
{
    FILE *fp = NULL;
    char chChar = 'Y';

    struct student obj;
    char chTemp;

    fp = fopen("student_structure_from_keyboard_to_file.txt","w");

    if(NULL == fp)
    {
        printf("\nCant Open File\n");
        return -1;
    }

    while(chChar == 'Y' || chChar == 'y')
    {
        printf("\n\nEnter name,Roll no. and Percentage:\n");
        scanf("%s %d %f",&obj.szName,&obj.iRollNo,&obj.fPerc);
        fwrite(&obj,sizeof(obj),1,fp);

        printf("\nAdd another record(Y/N)");
        scanf("%c%c",&chTemp,&chChar);
    }

    fclose(fp);
    fp = NULL;

    return 0;
}
