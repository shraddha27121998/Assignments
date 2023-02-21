#include<stdio.h>
main()
{
    float side_1,side_2,side_3;
    printf("enter the values of the triangle's sides");
    scanf("%f%f%f",&side_1,&side_2,&side_3);
    if(((side_1+side_2)>side_3)||((side_1+side_3)>side_2)||((side_2+side_3)>side_1))
    printf("triangle is valid");
    else
        printf("triangle is not valid");
    return 0 ;
    }
