#include<stdio.h>
#include<string.h>

int main(int argc , char * argv[] , char * envp[])
{
    int iCounter;
    char szStr[] = " Hello , Good ; Morning , Afternoon ; Night";
    char *pszSubStr = NULL;

    printf("%s\n\n",szStr);                 //  Hello , Good ; Morning , Afternoon ; Night

    pszSubStr = strtok(szStr , ",;");
    while(pszSubStr != NULL)
    {
        puts(pszSubStr);                    
        pszSubStr = strtok(NULL , ",;");
    }

    printf("\nLeaving main\n");             // Leaving main

    return 0;
}

/*
puts(pszSubStr);

 Hello 
 Good 
 Morning
 Afternoon
 Night

 */