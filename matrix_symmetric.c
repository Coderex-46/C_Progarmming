#include<stdio.h>
int main()
{
    int i,j,r,c;
    int mat[10][10];
    printf("Enter the dimensions of the matrix: \n");
    scanf("%d %d",&r,&c);
    if(r<1 || r>10 || c<1 || c>10)
    {
        fprintf(stderr,"Error: The dimesions of the matrix must be between 1 and 10\n");
        return 1;
    }
    if(r != c)
    {
        printf("The matrix is only symmetric when rows and columns are equal\n");
        return 0;
    }
        printf("Enter the entries for the matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    int is_symmetric=1;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        if(mat[j][i] != mat[i][j])
        {
        is_symmetric=0;
        break;
        }
        }
        if(is_symmetric == 0)
        {
            break;
        }
    }
    if(is_symmetric == 1)
    {
        printf("The matrix is symmetric\n");
    }
    else
    {
        printf("The matrix is not symmetric\n");
    }
    return 0;
}   