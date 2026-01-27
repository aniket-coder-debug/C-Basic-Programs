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
    struct student obj;

    fp = fopen("student_structure_from_file_to_screen.txt","r");

    if(NULL == fp)
    {
        printf("Cant Open File\n");
        return -1;
    }

    while(fscanf(fp,"%s%d%f",obj.szName,&obj.iRollNo,&obj.fPerc) != EOF)
    {
        // while(fread(&obj,sizeof(obj),1,fp) == 1) when structure changes
        printf("%s%d%f\n",obj.szName,obj.iRollNo,obj.fPerc);
    }

    fclose(fp);
    fp = NULL;

    return 0;
}
