int factorial(int);
int main()
{
    int n;
    printf("enter the number=");
    scanf("%d",&n);
    printf("%d",factorial(n));
    return 0;
}
int factorial(int m)
{
    if (m==0)
    return 1;
    else
    return(m*factorial(m-1));
}