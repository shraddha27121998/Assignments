#include<stdio.h>
main()
{
    int i,j,c=1;
    for(i=0;i<=3;i++)
    {
        for(j=1,c=1;j<=7;j++)
        {
           if((j<=4-i)||(j>=4+i))
                {
                    printf("%d",c);
                }
                else
                    printf(" ");

                     if(j>=4)
                 {
                     c--;
                 }
                      else
                        {
                       c++;
                 }
        }
        printf("\n");
    }
    return 0;
}
