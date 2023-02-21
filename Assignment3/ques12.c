#include<stdio.h>
main()
{
    char alpha;
    printf("enter any alphabet");
    scanf("%ch",&alpha);

    if(alpha<97)
        printf("uppercase");
    else
        printf("lowercase");
    return 0;
}
