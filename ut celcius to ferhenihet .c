#include<stdio.h>
int main()
{
    float celcius, farhrenhenit;
    printf("enter the temprature in celcius=");
    scanf("%f",& celcius);
    farhrenhenit=(celcius*9/5)+32;
     printf("\n %.2f celcius= %.2f farhenit",celcius,farhrenhenit);
     return 0;
}