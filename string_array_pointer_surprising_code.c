#include<stdio.h>

void Fun(char szStr[]);

int main(void)
{
    Fun("HELLO");

    return 0;
}

void Fun(char szStr[])              // ha parameter array ny tr pointer ahe
{
    printf("%s\n",szStr);           // HELLO

    // szStr[3] = 'Z';              // crash
    // printf("%c\n",szStr[3]);     // No Output (ithun khalch pn ny print hot mahnje crash hoty)

    szStr = "BYE";                  // allowed
    printf("%s\n",szStr);           // BYE

}
