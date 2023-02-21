int even_odd(int n)
{
    return (n%2==0);
}
main()
{
    int num;
    printf("enter a number ");
    scanf("%d",&num);
    if(even_odd(num)==1)
    {
        printf("even");
    }
    else
        printf("odd");
    return 0;

}


