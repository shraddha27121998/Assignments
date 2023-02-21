
#include<stdio.h>
main()
{
    int n=10,i=1;
    do{
        printf("%d\n",i*i*i);
        i++;
    }
    while(n>=i);
    return 0;
}


