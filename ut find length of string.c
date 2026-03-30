#include<stdio.h>
#include<string.h>
int string_length(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        i++;
    }
    return i;
}
int main()
{
    char str[10];
    fgets(str,sizeof(str),stdin);
    printf("%d",string_length(str)-1);
    return 0;
}