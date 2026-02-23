
#include <stdio.h>

int main() {
    int a,b,c;
    char op;
    printf("enter operator=");
    scanf("%c",&op);
    printf("enter two values=");
    scanf("%d%d",&a,&b);
    switch(op)
    {
        case'+':
        c=a+b;
        break;
        case'-':
        c=a-b;
        break;
        case'*':
        c=a*b;
        break;
        case '/':
        c=a/b;
        break;
        case '%':
        c=a%b;
        break;
        default:
        printf("invalid input");
        
    }
    printf("%d",c);
    return 0;
}