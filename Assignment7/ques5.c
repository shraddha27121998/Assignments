#include<stdio.h>
main()
{
    int i,n1,n2,hcf;
    printf("enter two numbers");
    scanf("%d%d",&n1,&n2);
    for(i=1;i<=n1*n2;i++)
    {
        if((i%n1==0)&&(i%n2==0))
        {
            printf("LCM of %d and %d is = %d \n",n1 ,n2, i);
        break;
        }
            }
hcf=n1*n2/i;
printf("HCF is = %d\n ",hcf);
if(hcf==1)
    printf("co-prime number");
else
    printf("not co -prime number");
return 0;
}
