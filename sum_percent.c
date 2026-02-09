// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main()
{
    float p,r,t,s,c;
    printf("enter the principal,rate and time=");
    scanf("%f%f%F",&p,&r,&t);
    s=(p*r*t)/100;
    c=p*pow((1+r/100),t)-p;
    printf("the simple intrest=%f\n",s);
    printf("the compound intrest=%f",c);



    return 0;
}