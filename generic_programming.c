#include<stdio.h>
#include<tchar.h>

int main(void)
{
    TCHAR chChar = 'A';
    TCHAR szStr[] = _T("Hello");
    TCHAR *pszStr = _T("Hello");

    printf("sizeof(chChar) = %d\n",sizeof(chChar));         // sizeof(chChar) = 1   (1 or 2)
    printf("sizeof(szStr) = %d\n",sizeof(szStr));           // sizeof(szStr) = 6    (6 or 12)
    printf("sizeof(pszStr) = %d\n",sizeof(pszStr));         // sizeof(pszStr) = 4   
    printf("length is %d\n",_tcslen(szStr));                // length is 5          

    return 0;
}
