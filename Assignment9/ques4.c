#include<stdio.h>
main()
{
    int s1,s2,s3;
    char choice;
    int hype,perp,base;
        int temp,temp1;
    printf(" a. check whether a given set of three numbers are length of an isosceles triangle or not \n");
    printf( " b. check whether a given set of three numbers are length of sides of a right angled triangle or not \n");
    printf(" c. check whether a given set of three numbers are length of sides of a equilateral triangle or not \n");
    printf(" d. Exit \n");
    printf("enter your choice \n");
    scanf("%ch",&choice);
    switch(choice)
    {
   case 97:
    printf("enter the values of sides in a triangle ");
    scanf("%d%d%d",&s1,&s2,&s3);
    if(s1==s2||s2==s3||s3==s1)
        printf("triangle is isosceles");
    else
        printf("not isosceles");
        break;
    case 98:
        printf(" enter the hype,prep ans base");
        scanf("%d%d%d",&hype,&perp,&base);
        temp=(hype*hype);
        temp1=(perp*perp)+(base*base);
        if(temp1==temp)
            printf("triangle is right angled");
        else
            printf("not right angled triangle");
            break;
    case 99:
        printf("enter the all sides of triangle");
        scanf("%d%d%d",&s1,&s2,&s3);
        if(s1==s2&&s2==s3)
            printf("triangle is equilateral");
        else
            printf("not equilateral");
            break;
    default:
               exit(0);
}
return 0;
}
