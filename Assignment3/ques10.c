#include<stdio.h>
main()
{
    float selling_price,cost_price,percentage,loss,profit;
    printf("enter the selling price and cost price");
    scanf("%f%f",&selling_price,&cost_price);
     if(cost_price>selling_price)
     {
          printf("loss= ");
          loss=cost_price-selling_price;
           percentage=(loss)/100;
           printf("%f",percentage);
           printf("%%");
     }
      else if (cost_price<selling_price)
      {
           printf("Profit= ");
                  profit=selling_price-cost_price;
           percentage=(profit)/100;
           printf("%f",percentage);
           printf("%%");
      }
        else
        {
            printf("Neither loss and nor Profit");
         }
                    return 0;
}

