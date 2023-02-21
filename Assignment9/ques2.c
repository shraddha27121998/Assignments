#include<stdio.h>
main()
{
    char choice;
    int a,b,c,d,e,x,y;
    printf("\n a. Addition");
    printf("\n b. Subtraction");
    printf("\n c. Multiplication");
    printf("\n d. Division");
    printf("\n e. Exit");
    printf("\n");
    printf("enter your choice: ");
    scanf("%c",&choice);
    printf("\n");
    int ch=choice;
    switch(ch)
    {
    case 97:
    printf("enter two number");
    scanf("%d%d",&x,&y);
    printf("addition of %d and %d is  = %d",x,y,x+y);
    printf("\n");
    break;
    case 98:
    printf("enter two number");
    scanf("%d%d",&x,&y);
    printf("Sub of %d and %d is  = %d",x,y,x-y);
    printf("\n");
    break;
    case 99:
    printf("enter two number");
    scanf("%d%d",&x,&y);
    printf("Mul of %d and %d is  = %d",x,y,x*y);
    printf("\n");
    break;
    case 100:
    printf("enter two number");
    scanf("%d%d",&x,&y);
    printf("Div of %d and %d is  = %d",x,y,x/y);
    printf("\n");
    break;
    case 101:
        break;
    default:
        printf("Wrong Input");
        break;

    }
    return 0;
}

