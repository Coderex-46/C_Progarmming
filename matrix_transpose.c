#include<stdio.h>
int main()
{
    int i,j,r,c;
    int mat[10][10],trans[10][10];
    printf("Enter the dimensions of the matrix: \n");
    scanf("%d %d",&r,&c);
    if(r<1 || r>10 || c<1 || c>10)
    {
        fprintf(stderr,"Error: dimensions must be between 1 and 10\n");
        return 1;
    }
    printf("Enter the entries for the Matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            trans[j][i]= mat[i][j];
        }
    }
    printf("The Transpose of the matrix is:\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}