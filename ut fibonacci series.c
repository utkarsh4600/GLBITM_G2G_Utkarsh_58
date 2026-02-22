#include <stdio.h>

int main() {
    int a=0,b=1,c,n,i;
    scanf("%d",&n);
    if (n<1)
    printf("not exist");
    else if (n==1)
    printf("%d\n",a);
    else if (n==2)
    printf("%d\n%d",a,b);
    else
    {
        printf("%d\n%d",a,b);
        for(i=1;i<=n-2;i++)
        c=a+b;
        printf("\n%d",c);
        a=b;
        b=c;
    }
  
    return 0;
}