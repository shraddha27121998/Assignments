#include<stdio.h>
main()
{
    int i,j;
    for(i=0;i<=3;i++)
    {
        for(j=1;j<=4;j++)
        {
            if((j==1)||(j==i+1))
                printf(" * ");
            else
                printf("   ");
        }
        printf("\n");
    }
    for(i=4;i<5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i+1)
              printf(" * ");
              else
                printf("   ");
        }
    printf("\n");
   }
    return 0;
}
