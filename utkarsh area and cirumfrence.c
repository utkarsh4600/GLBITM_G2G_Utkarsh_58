#include<stdio.h>
int main()
{
    float r ,area, cir;
    printf("enter the radius =");
    scanf("%f",&r);
    area=3.14*r*r;
    cir=2*r*3.14;
    printf("the area of circle is= %.2f and circumfrance is= %.2f", area,cir);
    return 0;
}