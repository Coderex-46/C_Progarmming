#include<stdio.h>
int main()
{
    int i,j,r,c;
    int a[10][10],b[10][10],sum[10][10];
    printf("Enter the Dimensions of the matrix: \n");
    scanf("%d %d",&r,&c);
    if(r<1 || r>10 || c<1 || c>10)
    {
        fprintf(stderr,"Error: the dimensions are not valid and must be between 1 and 10\n");
        return 1;
    }
    printf("Enter the entries for matrix A:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the Entries for matrix B:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Sum of the matrices:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
return 0;
}