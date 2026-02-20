#include<stdio.h>
int main()
{
    int f=0,e=0,i,n;
    printf("enter the number =");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
       if(i%2==0)
       {
           f=f+i;
       }
       else
       {
       e=e+i;
       }
       printf("sum of even number=%d\nood sum=%d",f,e);
    return 0;
   }