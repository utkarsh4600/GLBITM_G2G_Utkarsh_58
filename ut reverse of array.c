#include<stdio.h>
int main()
{
    int a[10],i,n;
    printf("enter the size of array =");
    scanf("%d",&n);
    printf("enter the array=");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("reverse");
    for(i=n-1;i>=0;i--){
        printf("\n%d",a[i]);
    }
    return 0;
}