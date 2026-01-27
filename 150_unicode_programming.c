#include<stdio.h>
#include<wchar.h>

int main(void)
{
    wchar_t wchChar = 'A';
    wchar_t wszStr[] = L"Hello";
    wchar_t *wpszStr = L"Hello";

    printf("sizeof(chChar) = %d\n",sizeof(wchChar));         // sizeof(chChar) = 2
    printf("sizeof(szStr) = %d\n",sizeof(wszStr));           // sizeof(szStr) = 12
    printf("sizeof(pszStr) = %d\n",sizeof(wpszStr));         // sizeof(pszStr) = 4
    printf("str Length is %d\n",strlen(wszStr));             // str Length is 1
    printf("wcs Length is %d\n",wcslen(wszStr));             // wcs Length is 5

    return 0;
}
