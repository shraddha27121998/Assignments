#include<stdio.h>
main()
{
    int i,x,y,hcf;
    printf("enter the values of x and y");
    scanf("%d%d",&x,&y);
    for(i=1;i<=x*y;i++)
    {
        if((i%x==0)&&(i%y==0))
        {
            printf("LCM of %d and %d is = %d\n",x,y,i);
            break;
        }
    }
hcf=x*y/i;
printf("HCF is = %d",hcf);
    return 0;
}
