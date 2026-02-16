#include<stdio.h>
int main()
{
    char alphabet ;
    printf("enter the alphabet=");
    scanf("%c",&alphabet);
    if (alphabet=='a' || alphabet=='e'|| alphabet=='i'||alphabet=='o'||alphabet=='u')
    {
        printf("the alphabet is vovel");
    }
    else
    {
        printf("the alphabet is consonant");
    }
    
    
    return 0;
}