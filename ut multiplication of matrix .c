#include<stdio.h>
int main()
{
    int r1,r2,c1,c2,i,j,k,a[10][10],b[10][10],c[10][10];
    printf(" enter the size of row and column of 1st element=");
    scanf("%d%d",&r1,&c1);
     printf(" enter the size of row and column of 2nd element=");
    scanf("%d%d",&r2,&c2);
    
    if(c1!=r2)
    {
    printf("multiplication is not possible=");
    }
    else 
    {
        printf("enter the element of 1st matrix=");
        for (i=0;i<r1;i++)
        {
            for (j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("enter the second matrix=");
        for (i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        printf("matrix multiplication \n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                c[i][j]=0;
                for(k=0;k<c1;k++)
                {
                    c[i][j]+=a[i][j]*b[i][j];
                }
            }
        }
        printf("resultant matrix=\n");
        for (i=0;i<r1;i++)
        {
            for (j=0;j<c2;j++)
            {
                printf("%d",c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}