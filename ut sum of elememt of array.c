#include<stdio.h>
int main()
{
    int a[10],i,n,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    printf("sum of element=%d",s);
    return 0;
}