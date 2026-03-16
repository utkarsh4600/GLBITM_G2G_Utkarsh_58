#include<stdio.h>
int factorial(int);
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",factorial(n));
    return 0;
}
int factorial(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}