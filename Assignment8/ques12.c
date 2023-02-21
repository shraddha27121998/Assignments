#include<stdio.h>
main()
{
    int i,j;
    char a='A';
    for(i=0;i<=3;i++)
    {
        for(j=0,a='A';j<=6-i;j++)
        {
            if(j>=i)
            {
                printf("%c",a);

                    if(j<3)
                    a++;
                    else
                    a--;
            }
                    else
                    printf(" ");
          }
            printf("\n");


    }
    return 0;

}
