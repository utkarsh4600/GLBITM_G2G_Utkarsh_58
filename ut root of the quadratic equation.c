#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,D,r,R,img_part;
    scanf("%f%f%f",&a,&b,&c);
    D=b*b-4*a*c;
    switch(D>0)
    {
        case 1:
        r=-b+sqrt(D)/2*a;
        R=-b-sqrt(D)/2*a;
        
        printf("roots are distinct and real :root 1=%.2f\nroot2=%.2f",r,R);
        break;
        
        case 0:
        switch(D<0)
        {
            case 1:
            r=R=-b/2*a;
            img_part=sqrt(-D)/2*a;
            printf("roots are imaginary roots=%.2f+%.2fi\n %.2f-%.2fi, r,img_part,R,img_part");
            break;
            case 0:
            r=R=-b/2*a;
            printf("roots are real and equal:root1=%.2f\n root2=%.2f",r,R);
        }
    }
    
    
    return 0;
}