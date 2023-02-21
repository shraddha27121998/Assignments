#include<stdio.h>
main()
{
    float hindi,english,math,science,sanskrit,total;
    float percentage;
    printf("enter the marks of all subjects \n");

    printf("hindi=");
    scanf("%f",&hindi);
    printf("english=");
    scanf("%f",&english);
    printf("math=");
    scanf("%f",&math);
    printf("science=");
    scanf("%f",&science);
    printf("sanskrit=");
    scanf("%f",&sanskrit);
    total=hindi+english+math+science+sanskrit;
    printf("total out of 500 is=%f\n",total);
 percentage=(total/500)*100;
 printf("percentage is %f \n",percentage);
    if(hindi>=33&&english>=33&&math>=33&&science>=33&&sanskrit>=33)
    printf("pass \n");
    else
    {
    printf("fail \n");
    }
return 0;

}



