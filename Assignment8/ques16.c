 #include<stdio.h>
 main()
 {
     int i,j;
     for(i=0;i<=3;i++)
     {
         for(j=1;j<=8;j++)
         {
             if((j==5-i)||(j==5+i))
                printf(" * ");
             else
                printf("   ");
         }
         printf("\n");
     }
     for(i=4;i<5;i++)
     {
         for(j=1;j<=9;j++)
         {
             if(j<=9)
                printf(" * ");
         }
         printf("   ");
     }
     printf("\n");
     return 0;
 }
