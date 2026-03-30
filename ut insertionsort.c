#include<stdio.h>
int main()
{
    int a[10],i,j,temp,n;
    printf("enter the number of element of array=");
    scanf("%d",&n);
    printf("enter the element in array=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("insertion sort technique\n");
    for(i=0;i<n;i++)
    {
        for(j=1;j>0;j--)
        {
            if(a[j-1]>a[j])
            {
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
    printf("sorted array=");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    return 0;
}