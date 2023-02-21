float SI(float p,float t,float r )
{
    float simple_intrest;
    simple_intrest=(p*t*r)/100;
    return simple_intrest;
}
main()
{
    float pr,ti,ra;
    printf("enter the principle time and rate");
    scanf("%f%f%f",&pr,&ti,&ra);
    printf("si = %f",SI(pr,ti,ra));
    return 0;
}
