#include<stdio.h>
int main()
{
    int i,j,r,c;
    int mat[10][10];
    printf("Enter the dimensions of the matrix: \n");
    scanf("%d %d",&r,&c);
    if(r<1 || r>10 || c<1 || c>10)
    {
        fprintf(stderr,"Error: The dimensions of the matrix must be betweeb 1 to 10\n");
        return 1;
    }
    printf("Enter the entries of the matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        int row_sum =0;
        for(j=0;j<c;j++)
        {
            row_sum += mat[i][j];
        }
        printf("The sum of the row %d = %d\n",i+1,row_sum);
    }
    for(j=0;j<c;j++)
    {
        int col_sum=0;
        for(i=0;i<r;i++)
        {
            col_sum += mat[i][j];
        }
        printf("The sum of the column %d = %d\n",j+1,col_sum);
    }
return 0;
}