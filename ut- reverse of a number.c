
#include <stdio.h>

int main() {
    int n,reverse=0,remender;
    printf("enter the number=");
    scanf("%d",&n);
    while(n!=0)
    {
    remender=n%10;
    reverse=reverse*10+remender;
    n/=10;
    
    }
    printf("reverse number=%d",reverse);
    return 0;
}