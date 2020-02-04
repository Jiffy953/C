void main()
{
    printf("%s", "Enter first integer: ");
    unsigned int x;
    scanf("%u", &x);
    printf("%s", "Enter second integer: ");
    unsigned int y;
    scanf("%u", &y);

    unsigned int i = 1;
    unsigned int power = 1;

    while(i <= y )
    {
        power = power * x;
        ++i;
    }
    printf("%u\n", power);
}

