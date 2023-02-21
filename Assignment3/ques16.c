#include<stdio.h>
main()
{
    char ch;
    printf("enter a character");
    scanf("%ch",&ch);
    if(ch<=47&&ch>=32)
        printf("special character");
    if(ch<=57&&ch>=48)
        printf("digit");
    if(ch<=90&&ch>=65)
        printf("uppercase");
    if(ch<=122&&ch>=97)
        printf("lowercase");
    return 0;

}
