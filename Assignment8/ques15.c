#include<stdio.h>
main()
{
    int i,j;
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=4;j++)
        {
            if((j==4-i)||(j==4))

                printf(" * ");
                else
                    printf("   ");

        }
            printf("\n");
    }
    for(i=4;i<5;i++)
        {
            for(j=0;j<=4;j++)
            {
                if(j<=i)

                    printf(" * ");
                    else
                        printf("   ");
            }
                printf("\n");
            }
            return 0;
}
