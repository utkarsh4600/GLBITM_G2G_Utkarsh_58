#include<stdio.h>
int main()
{
    int eng ,chem, phy , maths, computer;
    float total, percentage;
    printf ("enter the five subject marks=\n");
    scanf ("%d%d%d%d%d",&eng,&chem,&phy,&maths,&computer);
    
    total=eng+chem+phy+maths+computer;
    percentage=(total/500)*100;
    printf("total number is =%.0f",total);
    printf("\npercentage is =%.2f",percentage);
    if (percentage>=90)
    printf("\n grade A");

    else if(percentage>=80)
    printf("\n grade B");
 
    else if (percentage>=60)
    printf("\n grade C");

    else
    printf("\n grade D");

     return 0;
    
}