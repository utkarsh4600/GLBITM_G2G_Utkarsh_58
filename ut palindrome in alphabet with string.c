#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    int i,l;
    fgets(str,sizeof(str),stdin);
    l=strlen(str);
    for(i=0;i<l/2;i++)
    {
        if(str[i]!=str[l-2-i])
        {
            break;
        }
    }
    if(i==l/2)
    {
        printf("Palindrome.");
    }
    else
    {
        printf("Not Palindrome.");
    }
    return 0;
}