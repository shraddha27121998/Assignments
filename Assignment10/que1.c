float area(float radius)
{
float aoc;
    aoc=3.14*radius*radius;

    return aoc;
}
main()
{
    int r;
    printf("enter the radius");
    scanf("%d",&r);

    printf("area of circle is  =%f",area(r));
    return 0;
}
