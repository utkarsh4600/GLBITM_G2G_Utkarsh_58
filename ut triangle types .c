#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the three side of triangle=");
    scanf("%d%d%d",&a,&b,&c);
    if (a==b && a==c)
    {
        printf("the triangle is equilateral");
        
    }
    else if(a==b || b==c || a==c){
        printf("traingle are isosceles triangle");
    }
    else {
        printf("scalen triangle");
    }
    return 0;
}