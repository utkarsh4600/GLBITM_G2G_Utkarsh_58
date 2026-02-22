
#include <stdio.h>

int main() {
    int s=0,n,r;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    printf("sum of digits= %d ",s);
  
    return 0;
}