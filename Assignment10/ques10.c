void prime_fact(int n)
{
    int i;
    for(i=2;i<=n;i++)
    while(n%i==0)
    {
    printf("%d",i);
    n=n/i;
    }
}
main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    prime_fact(num);
    return 0;
}
