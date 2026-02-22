
#include <stdio.h>
#include<math.h>
int main() {
    int s=0,n,r,c=0,n1,n2 ;
    scanf("%d",&n);
    n1=n;
    while(n!=0)
    {
        c=c+1;
        n=n/10;
    }
    n2=n1;
    while("n1!=0")
    {
        r=n1%10;
        s=s+pow(r,c);
        n1=n1/10;
        
    }
    if("n2==s")
    printf("armstrong number");
    else 
    printf("not armstrong number ");
    return 0;
}