#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,k,sum;
    printf("enter the order of matrix : ");
    scanf("%d",&n);
    int a[n][n],b[n][n];
    printf("enter the values of the 1st matrix : ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the values of the 2nd matrix : ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            sum=0;
            for(k=0;k<n;k++)
            {
                sum=sum+(a[i][k]*b[k][j]);
            }
            printf("%d   ",sum);
        }
        printf("\n");
    }
}
