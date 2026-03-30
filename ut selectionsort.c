#include<stdio.h>
int main()
{
    int a[10],i,j,temp,n,min;
    printf("enter the number of element of array=");
    scanf("%d",&n);
    printf("enter the element in array=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("apply selection sort to sort an array\n");
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
            {
                min=j;
            }
            temp=a[min];
            a[min]=a[i];
            a[i]=temp;
        }
    }
    printf("sorted array=");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    return 0;
}