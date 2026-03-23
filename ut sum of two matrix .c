#include<stdio.h>
int main()
{
    int r1,c1,r2,c2,a[10][10],b[10][10],c[10][10],i,j;
    printf("enter the size of row and coloumn of 1st matrix=");
    scanf("%d%d",&r1,&c1);
    printf("enter the size of row and coloumn of 2nd matrix=");
    scanf("%d%d",&r2,&c2);
    
    if (r1!=r2 || c1!=c2)
    {
        printf(" addition is not possible ");
    }
    else 
    {
        printf("enter the element of 1st matrix=");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
            scanf("%d",&a[i][j]);
            }
        }
        printf(" enter element of second matrix=");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        printf(" addition of element of both matrix\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
            }
        }
        printf("sum matrix is = \n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%d  ",c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}