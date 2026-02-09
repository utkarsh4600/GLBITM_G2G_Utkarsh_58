// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a,b,c,d,e,sum;
    float per;
    printf("enter the 5 number =");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    per=sum/5.0;
    printf("the sum of number is=%d\n percentange=%f",sum,per);

    return 0;
}