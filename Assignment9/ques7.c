#include<stdio.h>
main()
{
    float unit,total,ftotal;
    printf("enter the unit");
    scanf("%f",&unit);
    switch(unit<=50)
    {
    case 1:
        total=unit*0.50;
        break;
    case 0:
        switch(unit<=150)
        {
        case 1:
            total=25+(unit-50)*0.75;
            break;
        case 0:
            switch(unit<=250)
            {
            case 1:
                total=100+(unit-150)*1.20;

                break;
            case 0:
                switch(unit>=250)
                {
                case 1:
                  total=281+(unit-250)*1.50;
                    break;
                }
                    break;
            }
            break;
        }
    }
    ftotal=total+Ntotal*0.2;
        printf("%f",ftotal);
    return 0;
}
