#include<stdio.h>
main()
{
    int j,i;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<=3-i)
                printf(" ");
            else
                printf("*");
            }
        printf("\n");
    }
    return 0;
}
